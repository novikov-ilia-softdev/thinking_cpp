#include <iostream>
#include <vector>
#include "selfcounter.h"

int main()
{
	typedef std::vector<SelfCounter> SelfCounterVector;
	const int size = 3;
	std::cout << "create stack:" << std::endl;
	SelfCounterVector stack;

	std::cout << std::endl << "push:" << std::endl;

	for( int i = 0 ; i < size; i++)
	{
		stack.push_back( SelfCounter());
	}

	std::cout << std::endl << "peek:" << std::endl;

	std::cout << stack[ stack.size() - 1] << std::endl;

	std::cout << std::endl << "pop:" << std::endl;

	SelfCounterVector::reverse_iterator it = stack.rend();
	while( it != stack.rbegin())
	{
		std::cout << *it << std::endl;
		stack.pop_back();
		it = stack.rend();
	}

	std::cout << std::endl << "after all:" << std::endl;
}
