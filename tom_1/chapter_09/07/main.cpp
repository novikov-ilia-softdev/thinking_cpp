#include <cstring>
#include <iostream>

class X{
public:
	inline X( char value = 0);
	inline void print() const;

private:
	static const int _size = 20;
	char _chArr[ _size];
};

X::X( char value)
{
	memset( _chArr, value, _size);
}

void X::print() const
{
	for( int i = 0; i < _size; i++)
	{
		std::cout << _chArr[ i] << " ";
	}

	std::cout << std::endl;
}

int main()
{
	X x( 'd');
	x.print();
}
