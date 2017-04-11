#include <iostream>

class MyClass{
public:
	int f(float) const { return 1; }
	int f(int) const { return 2; }
};

int (MyClass::*fpFloat)(float) const;
int (MyClass::*fpInt)(int) const;

int main()
{
	MyClass obj;

	fpFloat = &MyClass::f;
	fpInt = &MyClass::f;

	std::cout << "(obj.*fpFloat)( 3.14): " << (obj.*fpFloat)(3.14) << std::endl;
	std::cout << "(obj.*fpInt)( 5): " << (obj.*fpInt)(5) << std::endl;
	std::cout << "(obj.*fpFloat)( 7): " << (obj.*fpFloat)(7) << std::endl;
	std::cout << "(obj.*fpInt)( 2.71): " << (obj.*fpInt)(2.71) << std::endl;
}
