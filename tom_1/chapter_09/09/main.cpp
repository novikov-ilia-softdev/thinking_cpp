#include "stringstack.h"
#include <iostream>

int main()
{
	std::string iceCream [] = {
		"phralines & cream",
		"fudge ripple",
		"jamocha almond fudge",
		"wild mountain blackberry",
		"raspberry sorbet",
		"lemon swirl",
		"rocky road",
		"deep chocolate fudge"
	};

	const int size = sizeof( iceCream) / sizeof( *iceCream);

	StringStack stack;

	for( int i = 0; i < size; i++)
	{
		stack.push( &iceCream[ i]);
	}

	const std::string* s;

	while( s = stack.pop())
	{
		std::cout << *s << std::endl;
	}
}
