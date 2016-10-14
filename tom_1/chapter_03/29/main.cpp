#include <iostream>
#include <cstdlib>
#include "printbinary.h"

int main( int argc, char* argv[])
{
	double d = atof( argv[ 1]);
	std::cout << d << " in binary:" << std::endl;
	unsigned char * ptr = reinterpret_cast<unsigned char *>( &d);
	for( int i = sizeof( double) - 1; i >= 0; i--)
	{
		printBinary( *(ptr + i));
	}
	std::cout << std::endl;
}
