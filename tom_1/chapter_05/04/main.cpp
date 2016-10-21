#include <iostream>

class MyClass2;

class MyClass{
public:
	void f( MyClass2* ptr)
	{
		std::cout << "MyClass::f" << std::endl;
		std::cout << "this: " << (long)this << std::endl;
		std::cout << "ptr: " << (long)ptr << std::endl;
	};
};

class MyClass2{
public:
	void f( MyClass* ptr)
	{
		std::cout << "MyClass2::f" << std::endl;
		std::cout << "this: " << (long)this << std::endl;
		std::cout << "ptr: " << (long)ptr << std::endl;
	};
};

int main(){
	MyClass obj;
	MyClass2 obj2;
	obj.f( &obj2);
	obj2.f( &obj);
}
