#include <iostream>

void increment( int*& i)
{
	i++;
}

void print( int* i)
{
	std::cout << "i = " << i << std::endl;
	std::cout << "*i = " << *i << std::endl << std::endl;
}

int main()
{
	int a = 5;
	int *i = &a;
	print( i);
	increment( i);
	print( i);
}
