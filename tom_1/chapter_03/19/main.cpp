#include <iostream>

int main()
{
	int a[10];
	std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
	for( int i = 0; i < 10; i++)
	{
		std::cout << "&a[" << i << "] = " << (long)&a[i] << std::endl;
	}
}
