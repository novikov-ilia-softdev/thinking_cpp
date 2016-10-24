#include <iostream>

class MyClass{
public:
	void print( int, int = 5) const;
};

void MyClass::print( int a, int b) const
{
	std::cout << "void MyClass::print( int a, int b) const" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}


int main()
{
	MyClass obj;
	obj.print( 1);
}
