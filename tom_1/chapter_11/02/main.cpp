#include <iostream>

void print( const int& a, const int& b, const int& c, const int& d)
{
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;
}

int main()
{
	int a = 0;
	int &b = a;
	int c = 5;
	const int& d = c;

	print( a, b, c, d);

	b++;
	//d--;

	print( a, b, c, d);
}
