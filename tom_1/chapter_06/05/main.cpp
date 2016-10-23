#include <iostream>

int main()
{
	int i = 0;
	for( ; i < 10; i++)
	{
		std::cout << "i: " << i << std::endl;
	}

	std::cout << std::endl;

	for( int i = 0; i < 10; i++)
	{
		std::cout << "i: " << i << std::endl;
	}
}
