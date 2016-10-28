#include <iostream>

int main()
{
	double arr[] = { 1, 2, 3, 4, 5};

	for( int i = 0; i < 5; i++)
	{
		std::cout << arr[ i] << " ";
	}
	std::cout << std::endl;

	double * const ptr = arr;
	*ptr = 6;
	*(ptr + 1) = 7;
	*(ptr + 2) = 8;
	//ptr++;

	for( int i = 0; i < 5; i++)
	{
		std::cout << arr[ i] << " ";
	}
	std::cout << std::endl;
}
