#include <iostream>

class X {
public:
	X()
	{
		std::cout << "X::X" << std::endl;
		virtualFunction();
	}
	virtual void virtualFunction() { std::cout << "X::virtualFunction" << std::endl; }
};

class Y: public X {
public:
	Y(): X()
	{
		std::cout << "X::X" << std::endl;
		virtualFunction();
	}
	void virtualFunction() { std::cout << "Y::virtualFunction" << std::endl; }
};

int main()
{
	X* x = new X();
	X* y = new Y();
	x->virtualFunction();
	y->virtualFunction();
}
