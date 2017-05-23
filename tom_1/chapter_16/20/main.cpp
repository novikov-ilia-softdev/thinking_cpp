#include <iostream>
#include "tstack.h"
#include <boost/lexical_cast.hpp>

int main()
{
	TStack<std::string> stack;
	for( int i = 0; i < 5; i++)
	{
		stack.push( new std::string( boost::lexical_cast<std::string>( i)));
	}

	std::string* str = 0;
	while( str = stack.pop())
	{
		std::cout << *str << std::endl;
	}
}
