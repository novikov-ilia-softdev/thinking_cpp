#include <iostream>

class Base{
public:
	virtual void virtualFunction()
	{
		std::cout << "Base::f" << std::endl;
	}
};

class Derived: public Base{
public:
	virtual void virtualFunction()
	{
		std::cout << "Derived::f" << std::endl;
	}
};

int main()
{
	Base* bp = new Derived;
	bp->virtualFunction();
}
