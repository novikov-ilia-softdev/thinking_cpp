#include <iostream>

void printBinary( const unsigned char val)
{
	static int count = 0;
	for( int i = 7; i >= 0; i--)
	{
		if( val bitand (1 << i))
			std::cout << "1";
		else
			std::cout << "0";

		if( count == 0 || count == 11)
			std::cout << " ";

		count++;
	}
}
