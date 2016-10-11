#include "printbinary.h"
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
	std::cout << "Enter a number between 0 and 255: ";
	std::cin >> getVal; b = getVal;
	PR( "b in binary: ", b);
	PR( "a | b: ", a bitor b);
	PR( "a & b: ", a bitand b);
	PR( "a ^ b: ", a xor b);
	PR( "~a: ", compl a);
	PR( "~b: ", compl b);

	unsigned char c = 0x5A;
	PR( "c in binary: ", c);
	a or_eq c;
	PR( "a |= c: ", a);
	b and_eq c;
	PR( "b &= c: ", b);
	b xor_eq a;
	PR( "b ^= a: ", b);
}
