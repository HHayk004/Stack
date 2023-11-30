#include <iostream>
#include "stack.h"

int main()
{
	Hayk::Stack<int> obj;
	obj.push(1);

	std::cout << obj.empty() << std::endl;

	return 0;	
}
