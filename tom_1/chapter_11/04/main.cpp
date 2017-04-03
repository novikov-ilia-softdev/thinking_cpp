#include <iostream>

void print( const int& a, const int& b)
{
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;
}

int & func( int *ptr)
{
	(*ptr)++;
	return *ptr;
}

int main()
{
	int i = 7;
	int& j = func( &i);
	print( i, j);
	i++;
	print( i, j);
	j--;
	print( i, j);
}
