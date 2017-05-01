#include <iostream>

class Base{
public:
	int f() const { std::cout << "int Base::f() const" << std::endl; return 1; }
	int f( const std::string&) const { std::cout << "int Base::f( const std::string&) const" << std::endl; return 1; }
	void g() { std::cout << "void Base::f()" << std::endl; }
};

class Derived1: public Base{
public:
	void g() const { std::cout << "void Derived1::g() const" << std::endl; Base::f(); }
};

class Derived2: public Base{
public:
	int f() const { std::cout << "int Derived2::f() const" << std::endl; return 2; }
};

class Derived3: public Base{
public:
	void f() const { std::cout << "void Derived3::f() const" << std::endl; }
};

class Derived4: public Base{
public:
	int f( int) const { std::cout << "int Derived4::f( int) const" << std::endl; return 4; }
};

int main()
{
	std::string str( "hello");

	Derived2 d2;
	d2.f();
	//d2.f( str);

	Derived3 d3;
	d3.f();
	//d3.f( str);

	Derived4 d4;
	//d4.f();
	//d4.f( str);
}
