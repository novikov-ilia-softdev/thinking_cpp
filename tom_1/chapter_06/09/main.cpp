#include <iostream>

class Simple{
public:
	Simple( int i) : _i( i)
	{
		std::cout << "Simple::Simple()" << std::endl;
		std::cout << "_i: " << _i << std::endl;
	}

	~Simple()
	{
		std::cout << "~Simple::Simple()" << std::endl;
		std::cout << "_i: " << _i << std::endl;
	}

	void print()
	{
		std::cout << "Simple::print()" << std::endl;
		std::cout << "_i: " << _i << std::endl;
	}

private:
	int _i;
};

int main()
{
	Simple sArr[] = { Simple( 1), Simple( 2), Simple( 3) };
	for( int i = 0; i < sizeof( sArr) / sizeof( *sArr); i++)
	{
		sArr[ i].print();
	}
}
