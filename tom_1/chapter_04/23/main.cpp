#include "stackwrapper.h"
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	StackWrapper stackwrapper;
	std::ifstream in( "stack.cpp");
	std::string s;
	std::vector<std::string> strVector;
	std::cout << "source file: " << std::endl;
	int count = 0;
	while( getline( in, s))
	{
		std::cout << count++ << ": " << s << std::endl;
		strVector.push_back( s);
	}
	std::cout << std::endl;

	for( int i = 0; i < strVector.size(); i++)
	{
		stackwrapper.push( &(strVector[ i]));
	}

	std::cout << std::endl;

	std::cout << "stackwrapper: " << std::endl;
	void *vPtr = NULL;
	count = 0;
	while( vPtr = stackwrapper.pop())
	{
		std::string* strPtr = static_cast<std::string*>( vPtr);
		std::cout << count++ << ": " << *strPtr << std::endl;
	}
}
