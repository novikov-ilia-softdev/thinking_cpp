#include <iostream>

class MyClass{
public:
	void f1() { std::cout << "f1" << std::endl; }
	void f2() const { std::cout << "f2" << std::endl; }
};

MyClass & func( const MyClass *ptr)
{
	ptr->f1();
	ptr->f2();
	return *ptr;
}

int main()
{
	MyClass obj;
	MyClass * objPtr = &obj;
	MyClass & objRef = func( objPtr);
}
