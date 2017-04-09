#include <iostream>

class MyClass{
public:
	MyClass() {}
	MyClass( const MyClass& obj) { std::cout << "copy cstr" << std::endl; }
	~MyClass() {}
};

MyClass funcRetObj()
{
	MyClass obj;
	return obj;
}

void funcPassObj( const MyClass& obj)
{

}

int main()
{
	funcPassObj( funcRetObj());
}
