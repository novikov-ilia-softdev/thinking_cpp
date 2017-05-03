#include <iostream>

class X{
public:
	static void f1() { std::cout << "X:f1" << std::endl; }
	static void f2() { std::cout << "X:f2" << std::endl; }
};

class Y: public X{
public:
	//static void f1() { std::cout << "Y:f1" << std::endl; }
	static void f2() { std::cout << "Y:f2" << std::endl; }
};
int main()
{
	Y::f1();
	Y::f2();
}
