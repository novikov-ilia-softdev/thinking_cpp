#include <iostream>

class X {
public:
	virtual void virtualFunction() { std::cout << "X::virtualFunction" << std::endl; }
};

class Y: public X {
public:
	void virtualFunction() { std::cout << "Y::virtualFunction" << std::endl; }
};

int main()
{
	Y y;
}
