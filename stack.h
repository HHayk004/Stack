#ifndef STACK_H
#define STACK_H
	
#include <iostream>
#include <limits>
#include <initializer_list>

namespace Hayk {
	template <typename T>
	class Stack {
	private:
		size_t m_size;
		size_t m_capacity;
		const size_t m_max_size = std::numeric_limits<size_t>::max() / sizeof(T);
		T* m_ptr;
		
		void realloc(size_t);
	
	public:
		Stack();
		Stack(std::initializer_list<T>);
		Stack(const Stack<T>&);
		Stack(Stack<T>&&);
		~Stack();

		std::ostream& operator<<(std::ostream&) const;
		Stack& operator=(std::initializer_list<T>);
		Stack& operator=(const Stack&);
		Stack& operator=(Stack&&);

		size_t size();

		void push(T);
		void pop();

		T top();

		bool empty();
	};
}

#include "stack.hpp"
#endif
