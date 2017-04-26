#include <iostream>
#include <vector>
#include "counted.h"

int main()
{
	std::vector<Counted*> vector;

	for( int i = 0; i < 5; i++)
	{
		vector.push_back( new Counted());
	}

	for( int i = 0; i < vector.size(); i++)
	{
		std::cout << "vector[" << i << "] = " << *vector[ i] << std::endl;
	}

	for( int i = 0; i < vector.size(); i++)
	{
		delete vector[ i];
	}

	vector.clear();

	std::cout << "vector.size(): " << vector.size() << std::endl;
}
