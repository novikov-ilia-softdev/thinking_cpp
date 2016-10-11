#include "printbinary.h"
#include "rotate.h"
#include <iostream>

#define PR(STR, EXPR)	\
		std::cout << STR; printBinary(EXPR); std::cout << std::endl;

int main()
{
	unsigned int getVal;
	unsigned char a, b;
	std::cout << "Enter a number between 0 and 255: ";
	std::cin >> getVal; a = getVal;
	PR( "a in binary: ", a);

	std::cout << std::endl;
	std::cout << "ror:" << std::endl;
	for( int i = 0; i < 20; i++)
	{
		a = ror( a);
		PR( "ror a: ", a);
	}
	std::cout << std::endl;

	std::cout << "rol:" << std::endl;
	for( int i = 0; i < 20; i++)
	{
		a = rol( a);
		PR( "rol a: ", a);
	}
}
