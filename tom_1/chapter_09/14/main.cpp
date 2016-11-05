#include <iostream>

class A{
public:
	inline A();
};

class B{
public:
	inline B();

private:
	A _a;
};

A::A()
{
	std::cout << "A::A" << std::endl;
}

B::B()
{
	std::cout << "B::B" << std::endl;
}

int main()
{
	B b[ 10];
}
