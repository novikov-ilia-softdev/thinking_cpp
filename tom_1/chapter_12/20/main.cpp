#include <iostream>

class MyClass{
	MyClass() {}
	friend MyClass& operator=(MyClass& left, const MyClass& right);
};

MyClass& MyClass::operator=(MyClass& left, const MyClass& right) { return *this; }

int main()
{

}
