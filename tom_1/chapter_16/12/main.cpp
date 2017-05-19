#include <iostream>
#include <fstream>
#include "tstack.h"

int main()
{
	typedef Stack<std::string> StringStack;
	typedef StringStack::iterator StringStackIterator;

	std::ifstream file( "main.cpp");
	StringStack textLines;
	std::string line;

	while( getline( file, line))
		textLines.push( new std::string( line));

	int i = 0;
	StringStackIterator it = textLines.begin();

	StringStackIterator* it2 = 0;
	while( it != textLines.end())
	{
		std::cout << it->c_str() << std::endl;
		it++;
		if( ++i == 10)
			it2 = new StringStackIterator( it);
	}

	std::cout << std::endl << "------ delete ------:" << std::endl;
	std::cout << (*it2)->c_str() << std::endl;
	delete it2;
}
