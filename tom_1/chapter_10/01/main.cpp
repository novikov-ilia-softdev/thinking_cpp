#include <iostream>

int arr[] = { 5, 6, 7, 8, 9, -1};

int func( int arg = 0)
{
	static int* ptr = arr;

	int returnValue = -1;

	if( *ptr == returnValue)
		return returnValue;

	if( !arg)
	{
		returnValue = *ptr;
		ptr++;
	}


	return returnValue;
}

int main()
{
	for( int i = 0; i < 10; i++)
	{
		std::cout << func() << std::endl;
	}
}
