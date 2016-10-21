#include <iostream>

class MyClass;
class MyClass2;
class MyClass3{
public:
	void f( MyClass& obj);
};

class MyClass{
public:
	int getA() const { return a;}

private:
	friend class MyClass2;
	friend void MyClass3::f( MyClass& obj);
	int a;
};

class MyClass2{
public:
	void f2( MyClass& obj)
	{
		obj.a = 5;
	}

	void f3( MyClass& obj)
	{
		obj.a = 6;
	}
};

void MyClass3::f( MyClass& obj)
{
	obj.a = 7;
}

int main(){
	MyClass obj;
	std::cout << "obj.getA(): " << obj.getA() << std::endl;

	MyClass2 obj2;
	obj2.f2( obj);
	std::cout << "obj.getA(): " << obj.getA() << std::endl;
	obj2.f3( obj);
	std::cout << "obj.getA(): " << obj.getA() << std::endl;

	MyClass3 obj3;
	obj3.f( obj);
	std::cout << "obj.getA(): " << obj.getA() << std::endl;
}
