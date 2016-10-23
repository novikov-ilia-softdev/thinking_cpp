#include <iostream>

int main()
{
	double arr[ 5] = { 1.1, 2.2, 3.3, 4.4};
	for( int i = 0; i < sizeof( arr) / sizeof( *arr); i++)
	{
		std::cout << arr[ i] << " ";
	}
	std::cout << std::endl;

	double arr_2[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	for( int i = 0; i < sizeof( arr_2) / sizeof( *arr_2); i++)
	{
		std::cout << arr_2[ i] << " ";
	}
	std::cout << std::endl;
}
