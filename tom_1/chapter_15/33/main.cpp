#include <iostream>

class X{
public:
	X( int i): i_( i) {}
	virtual void f() {}

private:
	int i_;
};

void printBinary( const unsigned char val)
{
	for( int i = 7; i >= 0; i--)
	{
		if( val bitand (1 << i))
			std::cout << "1";
		else
			std::cout << "0";
	}
}

void printX( X* x)
{
	std::cout << "&x: " << ( void*)x << std::endl;
	std::cout << "sizeof( void*): " << sizeof( void*) << std::endl;
	std::cout << "sizeof( x): " << sizeof( *x) << std::endl << std::endl;

	std::cout << "binary content:" << std::endl;
	char* ptr = (char*)x;
	for( int i = 0; i < sizeof( X); i++)
	{
		std::cout << (void*)ptr << ": ";
		printBinary( *ptr);
		std::cout << std::endl;
		ptr++;
	}
	std::cout << std::endl;
}

int main()
{
	int i = 7;
	X x( i);
	printX( &x);
}
