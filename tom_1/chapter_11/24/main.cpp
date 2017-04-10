#include <iostream>

class MyClass{
public:
	MyClass( double d = 3.14): d_(d) {}
	void print() const { std::cout << "d: " << d_ << std::endl; }
	double d_;
};

int main()
{
	MyClass obj;
	MyClass* objPtr = &obj;

	double MyClass::*ptrToMember = &MyClass::d_;
	void (MyClass::*ptrToFuncMember)() const = &MyClass::print;

	(obj.*ptrToFuncMember)();
	obj.*ptrToMember = 7.18;
	(obj.*ptrToFuncMember)();

	objPtr->*ptrToMember = 2.71;
	(objPtr->*ptrToFuncMember)();
}
