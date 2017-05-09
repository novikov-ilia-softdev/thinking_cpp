#include <iostream>

class Base{
private:
	int i_;
};

class Derived: public Base{
private:
	int i_;
};

void f( Base b)
{
	std::cout << "sizeof( b): " << sizeof( b) << std::endl;
}

int main()
{
	Derived d;
	std::cout << "sizeof( d): " << sizeof( d) << std::endl;
	f( d);
}
