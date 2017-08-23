#include <iostream>

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

	}
}

int main()
{
	try
	{
		func( 1);
	}
	catch( char ex)
	{
		std::cout << "char exception: " << ex << std::endl;
	}

	try
	{
		func( 2);
	}
	catch( int ex)
	{
		std::cout << "int exception: " << ex << std::endl;
	}

	try
	{
		func( 3);
	}
	catch( bool ex)
	{
		std::cout << "bool exception: " << ex << std::endl;
	}

	try
	{
		func( 4);
	}
	catch( const MyException& ex)
	{
		std::cout << "MyException exception" << std::endl;
	}

	try
	{
		func( 4);
	}
	catch( const MyException& ex)
	{
		std::cout << "MyException exception" << std::endl;
	}
}
