#include "tpstash.h"
#include "int.h"
#include <iostream>
#include <fstream>

int main()
{
	typedef PStash<Int> IntStash;
	typedef PStash<Int>::iterator IntStashIterator;

	IntStash ints;
	for( int i = 0; i < 10; i ++)
		ints.add( new Int( i));

	IntStashIterator it = ints.begin();
	it += 3;
	IntStashIterator it2 = it + 5;
	for(; it != it2; it++)
	{
		delete it.remove();
	}
	for( it = ints.begin(); it != ints.end(); it++)
	{
		if( *it)
			std::cout << *it << std::endl;
	}

	std::cout << "------------------------------" << std::endl;

	typedef PStash<std::string> StringStash;
	typedef PStash<std::string>::iterator StringStashIterator;
	std::ifstream in( "main.cpp");
	StringStash strings;
	std::string line;
	while( getline( in, line))
		strings.add( new std::string( line));

	StringStashIterator sit = strings.begin();
	for(; sit != strings.end(); sit++)
		std::cout << **sit << std::endl;

	std::cout << "------------------------------" << std::endl;

	sit = strings.begin();
	int n = 26;
	sit += n;
	for(; sit != strings.end(); sit++)
		std::cout << **sit << std::endl;
}
