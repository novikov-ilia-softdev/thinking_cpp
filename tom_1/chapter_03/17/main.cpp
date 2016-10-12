#include <iostream>

union Packed {
	char i;
	short j;
	int k;
	float l;
	long d;
	double f;
};

int main()
{
	std::cout << "sizeof( Packed) == " << sizeof( Packed) << std::endl;
	Packed p;
	p.f = 3.1415;
	std::cout << "p.i == " << p.i << std::endl;
	std::cout << "p.j == " << p.j << std::endl;
	std::cout << "p.k == " << p.k << std::endl;
	std::cout << "p.l == " << p.l << std::endl;
	std::cout << "p.d == " << p.d << std::endl;
	std::cout << "p.f == " << p.f << std::endl;
}
