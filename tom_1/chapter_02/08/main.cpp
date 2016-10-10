#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

int main()
{
	std::vector<float> v;

	for( int i = 0; i < 25 ; i++)
	{
		float temp = rand();
		v.push_back( temp);
	}

	for( int i = 0; i < v.size() ; i++)
	{
		std::cout << v[ i] << std::endl;
	}
}
