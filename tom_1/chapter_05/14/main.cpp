#include "stack.h"
#include <iostream>

int main()
{
	Stack stack;
	for( int i = 0; i < 25; i++)
	{
		stack.push( i);
	}
	for( int i = 0; i < 25; i++)
	{
		std::cout << stack.pop() << std::endl;
	}
}
