#include <iostream>

class MyClass1{
public:
	MyClass1() {}
	MyClass1( const MyClass1& obj) { std::cout << "copy constructor of MyClass1" << std::endl; }
};

class MyClass{
public:
	int a;
	MyClass1 obj;
};

int main()
{
	MyClass obj;
	obj.a = 5;
	std::cout << "&obj.a: " << &obj.a << std::endl;
	std::cout << "obj.a: " << obj.a << std::endl;
	MyClass obj1( obj);
	std::cout << "&obj1.a: " << &obj1.a << std::endl;
	std::cout << "obj1.a: " << obj1.a << std::endl;
}
