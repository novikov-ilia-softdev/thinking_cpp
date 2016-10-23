#include "stack.h"
#include <iostream>

int main()
{
	Stack stack;

	std::string arr[] = {
						  std::string( "str_1"),
						  std::string( "str_2"),
						  std::string( "str_3"),
						  std::string( "str_4"),
						  std::string( "str_5") };

	for( int i = 0; i < sizeof( arr) / sizeof( *arr); i++)
	{
		stack.push( arr + i);
	}


	while( void* vPtr = stack.pop())
	{
		std::string* sPtr = static_cast<std::string*>( vPtr);
		std::cout << *sPtr << std::endl;
	}
}
