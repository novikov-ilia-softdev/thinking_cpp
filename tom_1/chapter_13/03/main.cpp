#include <iostream>
#include <fstream>
#include "pstash.h"
#include "myclass.h"

int main()
{
	/*
	PStash intStash;
	for( int i = 0; i < 25; i++)
	{
		intStash.add( new int( i));
	}

	for( int i = 0; i < intStash.count(); i++)
	{
		std::cout << "intStash[" << i << "] = " << *(int*)intStash[ i] << std::endl;
	}

	for( int i = 0; i < intStash.count(); i++)
	{
		delete intStash.remove( i);
	}

	std::ifstream in( "main.cpp");
	PStash stringStash;
	std::string line;
	while( getline( in, line))
		stringStash.add( new std::string( line));

	for( int i = 0; i < stringStash.count(); i++)
	{
		std::cout << "stringStash[" << i << "] = " << *(std::string*)stringStash[ i] << std::endl;
	}

	for( int i = 0; i < stringStash.count(); i++)
	{
		delete (std::string*)stringStash.remove( i);
	}
	*/

	PStash myClassStash;
	for( int i = 0; i < 5; i++)
	{
		myClassStash.add( new MyClass());
	}

	for( int i = 0; i < myClassStash.count(); i++)
	{
		std::cout << "myClassStash[" << i << "] = " << *(MyClass*)myClassStash[ i] << std::endl;
	}

	for( int i = 0; i < myClassStash.count(); i++)
	{
		delete (MyClass*)myClassStash.remove( i);
	}
}
