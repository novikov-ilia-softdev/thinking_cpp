#include <iostream>

class MyClass{
public:
	MyClass();
	MyClass( const MyClass& obj, double d = 3.14);
	~MyClass();
};

MyClass::MyClass()
{

}

MyClass::MyClass( const MyClass& obj, double d)
{
	std::cout << "copy cstr" << std::endl;
}

MyClass::~MyClass()
{
}

void funcPassObj( MyClass obj)
{

}

int main()
{
	MyClass obj;
	funcPassObj( obj);
}
