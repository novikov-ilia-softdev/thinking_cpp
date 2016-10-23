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

private:
	int _i;
};

int main()
{
	for( int i = 0; i < 100; i++)
	{
		Simple s( i);
		if( i == 3)
			goto exit;
	}

	exit:
		std::cout << "exit" << std::endl;
}
