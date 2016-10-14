#include <iostream>

void printArray( double* arr, int size);

int main()
{
	const int size = 7;
	double arr[ size];
	for( int i = 0; i < size; i++)
	{
		arr[ i] = 0.0;
	}
	printArray( arr, size);

	unsigned char * ptr = reinterpret_cast<unsigned char *>( arr);

	for( int i = 0; i < size * sizeof( double); i++)
	{
		*(ptr + i) = 1;
	}

	printArray( arr, size);
}

void printArray( double* arr, int size)
{
	std::cout << "array:" << std::endl;
	for( int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}
