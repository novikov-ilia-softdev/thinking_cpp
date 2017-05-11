#include <iostream>

class Empty{

};

class X {
public:
	virtual void f() {}
};

class Y {
public:
	virtual void f() {}
};

class Z: public X, public Y{

};

int main()
{
	std::cout << "sizeof( Empty) = " << sizeof( Empty) << std::endl;
	std::cout << "sizeof( X) = " << sizeof( X) << std::endl;
	std::cout << "sizeof( Y) = " << sizeof( Y) << std::endl;
	std::cout << "sizeof( Z) = " << sizeof( Z) << std::endl;
}
