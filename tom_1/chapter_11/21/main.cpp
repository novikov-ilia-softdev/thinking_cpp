#include <iostream>

class MyClass{
public:
	MyClass() {}
	~MyClass() {}

private:
	MyClass( const MyClass& obj);
};

void funcPassObj( MyClass obj)
{

}

int main()
{
	MyClass obj;
	funcPassObj( obj);
}
