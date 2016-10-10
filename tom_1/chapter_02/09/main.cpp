#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

int main()
{
	std::vector<float> v1;
	std::vector<float> v2;
	std::vector<float> v3;

	for( int i = 0; i < 7 ; i++)
	{
		float temp1 = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));
		v1.push_back( temp1);
		float temp2 = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));
		v2.push_back( temp2);
	}

	for( int i = 0; i < 7 ; i++)
	{
		std::cout << v1[i] << " + " << v2[i] << " = " << v1[i] + v2[i] <<  std::endl;
		float temp = v1[i] + v2[i];
		v3.push_back( temp);
	}

	std::cout << "v1:" << std::endl;
	for( int i = 0; i < v1.size() ; i++)
	{
		std::cout << v1[ i] << " ";
	}
	std:: cout << std::endl << std::endl;

	std::cout << "v2:" << std::endl;
	for( int i = 0; i < v2.size() ; i++)
	{
		std::cout << v2[ i] << " ";
	}
	std:: cout << std::endl << std::endl;

	std::cout << "v3 = v1 + v2:" << std::endl;
	for( int i = 0; i < v3.size() ; i++)
	{
		std::cout << v3[ i] << " ";
	}
	std:: cout << std::endl;
}
