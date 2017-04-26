#include <iostream>
#include <cstdlib>
#include <new>

int count = 0;
int portion = 1000;

void out_of_memory()
{
	std::cerr << "memory exhausted after " << count << " allocations!" << std::endl;
	std::cout << "available: " << sizeof( int) * portion * count << " bytes" << std::endl;
	exit( 1);
}

int main()
{
	std::set_new_handler( out_of_memory);
	while( 1)
	{
		std::cout << count << std::endl;
		new int[ portion];
		count++;
	}
}
