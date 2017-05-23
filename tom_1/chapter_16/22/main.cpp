#include <iostream>
#include "tvector.h"

int main()
{
	TVector<std::string> vector;

	vector.push_back( new std::string( "hello, "));
	vector.push_back( new std::string( "wonderful "));
	vector.push_back( new std::string( "world!"));

	for( int i = 0; i < vector.size(); i++)
	{
		std::cout << *vector[ i];
	}
	std::cout << std::endl;

	for( int i = 0; i < vector.size(); i++)
	{
		delete vector[ i];
	}
	vector.clear();
}
