#include <iostream>

class MyClass{
public:
	MyClass( double d = 3.14);
	MyClass( const MyClass& obj);
	~MyClass();

private:
	 double* d_;
};

MyClass::MyClass( double d)
{
	d_ = new double( d);
}

MyClass::MyClass( const MyClass& obj)
{
	d_ = new double( *obj.d_);
}

MyClass::~MyClass()
{
	std::cout << "MyClass::~MyClass()" << std::endl;
	std::cout << "*d_ == " << *d_ << std::endl << std::endl;
	*d_ = -1;
	delete d_;
	d_ = 0;
}

void funcPassObj( MyClass obj)
{

}

int main()
{
	MyClass obj;
	funcPassObj( obj);
}
