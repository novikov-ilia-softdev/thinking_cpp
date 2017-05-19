#include <iostream>
#include <fstream>
#include <stack>
#include "tstack.h"

int main()
{
	typedef Stack<std::string> StringStack;

	std::ifstream file( "main.cpp");
	StringStack textLines;
	std::string line;

	while( getline( file, line))
		textLines.push( new std::string( line));

	std::string* str = 0;

	while( str = textLines.pop())
	{
		std::cout << *str << std::endl;
	}
}
