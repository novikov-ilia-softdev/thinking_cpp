#include <iostream>

class X {
public:
	virtual void f() { std::cout << "X::virtualFunction" << std::endl; }
};

class Y: public X {
public:
	void f() { std::cout << "Y::virtualFunction" << std::endl; }
};

void testFunc( X x)
{
	x.f();
}

int main()
{
	Y y;
	testFunc( y);
}
