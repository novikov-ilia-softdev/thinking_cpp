#include <iostream>

class Base{
public:
	virtual void f() { std::cout << "Base::f()" << std::endl; }
	virtual void f( int i) { std::cout << "Base::f( int i)" << std::endl; }
	virtual void f( const std::string& str) { std::cout << "Base::f( const std::string& str)" << std::endl; }
};

class Derived: public Base{
public:
	void f( int i) { std::cout << "Derived::f( int i)" << std::endl; }
};

int main()
{
	Derived d;
	//d.f();
	d.f( 5);
	//d.f( "hello");

	Base* bp = &d;
	bp->f();
	bp->f( 5);
	bp->f( "hello");
}
