#include <iostream>

class Base{
public:
	Base()
	{
		std::cout << "Base::Base" << std::endl;
		virtualFunction();
	}

	void f()
	{
		std::cout << "Base::f" << std::endl;
		virtualFunction();
	}

	virtual void virtualFunction()
	{
		std::cout << "Base::virtualFunction" << std::endl;
	}


};

class Derived: public Base{
public:
	void virtualFunction()
	{
		std::cout << "Derived::virtualFunction" << std::endl;
	}

};

int main()
{
	Base* p = new Derived;
	std::cout << std::endl;
	p->f();
}
