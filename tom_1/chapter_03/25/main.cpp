#include "printbinary.h"
#include <iostream>

int main()
{
	float f = 3.1415;
	unsigned char* cPtr = (unsigned char*)&f;
	std::cout << "f = " << f << std::endl;
	for( int i = 0; i < sizeof(float); i++)
	{
		printBinary(cPtr[ i]);
		std::cout << " ";
	}
	std::cout << std::endl;
}
