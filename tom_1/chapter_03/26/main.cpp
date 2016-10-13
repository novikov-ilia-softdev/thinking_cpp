#include <iostream>
#include "printbinary.h"

void setVoid( void* vPtr, unsigned char bytesCount, unsigned char value)
{
	unsigned char *cPtr = static_cast<unsigned char *>(vPtr);
	for( int i = 0; i < bytesCount; i++)
	{
		*(cPtr + i) = value;
	}
}

int main()
{
	int a[10];
	void* vPtr = static_cast<void*>(a);
	for( unsigned char i = 0; i < 10; i++)
	{
		setVoid( vPtr + i * sizeof(int), sizeof(int), i);
	}

	for( int i = 0; i < 10; i++)
	{
		std::cout << (long)&a[i] << ": ";
		unsigned char * ptr = (unsigned char *)&a[ i];
		for( unsigned char i = 0; i < sizeof( int); i++)
		{
			printBinary( *(ptr + i));
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}
