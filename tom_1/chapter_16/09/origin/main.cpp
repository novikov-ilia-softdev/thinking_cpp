#include <iostream>
#include "valuestack.h"
#include "selfcounter.h"

int main()
{
	const int size = 3;
	std::cout << "create stack:" << std::endl;
	Stack<SelfCounter> stack;

	std::cout << std::endl << "push:" << std::endl;

	for( int i = 0 ; i < size; i++)
	{
		stack.push( SelfCounter());
	}

	std::cout << std::endl << "peek:" << std::endl;

	std::cout << stack.peek() << std::endl;

	std::cout << std::endl << "pop:" << std::endl;

	for( int i = 0 ; i < size; i++)
	{
		std::cout << stack.pop() << std::endl;
	}

	std::cout << std::endl << "after all:" << std::endl;
}
