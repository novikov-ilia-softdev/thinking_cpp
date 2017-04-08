#include <iostream>

class MyClass{
public:
	MyClass() {}
	MyClass( const MyClass& obj) { std::cout << "copy cstr" << std::endl; }
	~MyClass() {}
};

class MyClass2{
private:
	MyClass obj_;
};

void funcPassObj( MyClass2 obj)
{

}

int main()
{
	MyClass2 obj;
	funcPassObj( obj);
}
