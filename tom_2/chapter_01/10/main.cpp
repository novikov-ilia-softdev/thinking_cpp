#include <iostream>
#include <stdlib.h>

class MyException: public std::exception{
};

void func( int i) throw( char, int, bool, MyException)
{
	switch( i)
	{
	case 1: throw 'a'; break;
	case 2: throw 5; break;
	case 3: throw true; break;
	case 4: throw MyException(); break;
	case 5: throw 3.14; break;
	}
}
void unexpected_handler()
{
	std::cout << "unexpected_handler " << std::endl;
	exit( 0);
}

int main()
{
	std::set_unexpected( unexpected_handler);
	try
	{
		func( 5);
	}
	catch( ...)
	{
		std::cout << "exception: " << std::endl;
	}
}
