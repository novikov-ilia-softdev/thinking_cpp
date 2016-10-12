#include <iostream>

void printArrays( int arr[], int size, int arr_2[], int size_2);

int main()
{
	int arr[] = { 1, 2, 3};
	char c;
	int arr_2[] = { 4, 5, 6};

	std::cout << "before:" << std::endl;
	printArrays( arr, 3, arr_2, 3);

	arr[ 4] = 7;

	std::cout << std::endl;
	std::cout << "after:" << std::endl;
	printArrays( arr, 3, arr_2, 3);

}

void printArrays( int arr[], int size, int arr_2[], int size_2)
{
	std::cout << "arr:" << std::endl;
	for( int i = 0; i < size; i++)
	{
		std::cout << long(&arr[ i]) << ": " <<  arr[ i] << std::endl;
	}

	std::cout << std::endl;

	std::cout << long(&arr[ size]) << ": " <<  arr[ size] << std::endl;

	std::cout << std::endl;

	std::cout << "arr_2:" << std::endl;
	for( int i = 0; i < size_2; i++)
	{
		std::cout << long(&arr_2[ i]) << ": " <<  arr_2[ i] << std::endl;
	}
	std::cout << std::endl;
}
