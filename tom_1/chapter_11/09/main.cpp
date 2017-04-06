#include <iostream>

class MyClass{
public:
	void nonConstFunc() { std::cout << "nonConstFunc" << std::endl; }
	void constFunc() const { std::cout << "constFunc" << std::endl; }
};

void func( MyClass obj)
{
	obj.constFunc();
	obj.nonConstFunc();
}

void func1( MyClass& obj)
{
	obj.constFunc();
	obj.nonConstFunc();
}

void func2( const MyClass& obj)
{
	obj.constFunc();
	//obj.nonConstFunc();
}

int main()
{
	MyClass obj;
	func( obj);
	func1( obj);
	func2( obj);
}
