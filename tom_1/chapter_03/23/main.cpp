#include <iostream>

typedef union{
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
} Primitives;

int main()
{
	Primitives p[10];
	Primitives* pPtr = p;
	std::cout << "sizeof(Primitives) =  "<< sizeof(Primitives) << std::endl;
	std::cout << "pPtr =  "<< long(pPtr) << std::endl;
	pPtr++;
	std::cout << "pPtr =  "<< long(pPtr) << std::endl;
}
