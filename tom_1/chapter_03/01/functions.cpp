#include "functions.h"
#include <iostream>

void voidFunction()
{
	std::cout << "voidFunction" << std::endl << std::endl;
}

char charFunction( char arg)
{
	std::cout << "charFunction" << std::endl;
	std::cout << "arg == " << arg << std::endl << std::endl;
	return arg;
}

int intFunction( int arg)
{
	std::cout << "intFunction" << std::endl;
	std::cout << "arg == " << arg << std::endl << std::endl;
	return arg;
}

float floatFunction( float arg)
{
	std::cout << "floatFunction" << std::endl;
	std::cout << "arg == " << arg << std::endl << std::endl;
	return arg;
}
