#include <iostream>

class Base{
public:
	virtual Base* clone() { std::cout << "Base::clone" << std::endl; return new Base( *this); }
};

class Derived1 : public Base{
public:
	Base* clone() { std::cout << "Derived1::clone" << std::endl; return new Derived1( *this); }
};

class Derived2 : public Base{
public:
	Base* clone() { std::cout << "Derived2::clone" << std::endl; return new Derived2( *this); }
};

int main()
{
	Derived1 d1;
	Derived2 d2;
	Base* b1 = d1.clone();
	Base* b2 = d2.clone();
}
