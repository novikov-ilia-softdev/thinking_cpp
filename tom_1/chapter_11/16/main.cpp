#include <iostream>

class MyClass{
public:
	MyClass() { std::cout << "cstr" << std::endl;}
	MyClass( const MyClass& obj) { std::cout << "copy cstr" << std::endl; }
	~MyClass() { std::cout << "dstr" << std::endl;}

	int a;
};

void funcPassObject( MyClass obj)
{
	std::cout << "inside funcPassObject" << std::endl;
	std::cout << "funcPassObject return" << std::endl;
}

MyClass funcRetObject()
{
	std::cout << "inside funcRetObject" << std::endl;
	MyClass obj;
	std::cout << "funcRetObject return object" << std::endl;
	return obj;
}

int main()
{
	MyClass obj;
	std::cout << "before funcPassObject" << std::endl;
	funcPassObject( obj);
	std::cout << "after funcPassObject" << std::endl;

	std::cout << "before funcRetObject" << std::endl;
	funcRetObject();
	std::cout << "after funcRetObject" << std::endl;
}
