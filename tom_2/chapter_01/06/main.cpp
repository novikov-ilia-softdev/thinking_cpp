#include <iostream>

class MyClass{
public:
	MyClass()
	{
		std::cout << "MyClass::MyClass" << std::endl;
	}
	~MyClass()
	{
		std::cout << "MyClass::~MyClass" << std::endl;
		throw 5;
	}
};

int main()
{
	try
	{
		MyClass* myClassPtr = new MyClass;
		delete myClassPtr;
	}
	catch( ...)
	{
		std::cout << "exception!" << std::endl;
		MyClass* myClassPtr = new MyClass;
		delete myClassPtr;
	}
}
