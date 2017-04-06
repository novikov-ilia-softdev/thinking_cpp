#include <iostream>

void increment( int**& ptrPtrRef)
{
	ptrPtrRef++;
}

int main()
{
	int a = 5;
	int* ptr = &a;
	int** ptrPtr = &ptr;
	std::cout << "ptrPtr: " << ptrPtr << std::endl;
	increment( ptrPtr);
	std::cout << "ptrPtr: " << ptrPtr << std::endl;
}
