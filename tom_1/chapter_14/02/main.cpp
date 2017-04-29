#include <iostream>

class A{
public:
	A() { std::cout << "A" << std::endl; }
};

class B{
public:
	B() { std::cout << "B" << std::endl; }
};

class C: public A{
private:
	B b_;
};

int main()
{
	C c;
}
