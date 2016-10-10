#include <iostream>

void func()
{
	static int i = 0;
	std::cout << "i = " << ++i << std::endl;
}

int main()
{
	for( int i = 0; i < 10; i++)
	{
		func();
	}
}
