#include <iostream>

class A{
public:
	A() { std::cout << "A" << std::endl; }
	~A() { std::cout << "~A" << std::endl; }
};

class B: public A{
public:
	B() { std::cout << "B" << std::endl; }
	~B() { std::cout << "~B" << std::endl; }
};

class C: public B{
public:
	C() { std::cout << "C" << std::endl; }
	~C() { std::cout << "~C" << std::endl; }
};

int main()
{
	C c;
}
