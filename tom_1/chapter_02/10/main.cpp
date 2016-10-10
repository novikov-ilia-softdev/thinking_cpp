#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

int main()
{
	std::vector<float> v;

	for( int i = 0; i < 7 ; i++)
	{
		float temp = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));
		v.push_back( temp);
	}

	std::cout << "v before:" << std::endl;
	for( int i = 0; i < v.size() ; i++)
	{
		std::cout << v[ i] << " ";
	}
	std:: cout << std::endl << std::endl;

	for( int i = 0; i < 7 ; i++)
	{
		v[ i] = v[ i] * v[ i];
	}

	std::cout << "v after:" << std::endl;
	for( int i = 0; i < v.size() ; i++)
	{
		std::cout << v[ i] << " ";
	}
	std:: cout << std::endl << std::endl;
}
