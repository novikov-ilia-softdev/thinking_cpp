#include <iostream>

class Base{
public:
	virtual ~Base()
	{
		std::cout << "~Base" << std::endl;
		f();
	}

	virtual void f() { std::cout << "Base::f" << std::endl; }
};

class Derived: public Base{
public:
	virtual ~Derived()
	{
		std::cout << "~Derived" << std::endl;
	}

	void f() { std::cout << "Derived::f" << std::endl; }
};

class Derived2: public Derived{
public:
	virtual ~Derived2()
	{
		std::cout << "~Derived2" << std::endl;
	}

	void f() { std::cout << "Derived2::f" << std::endl; }
};

int main()
{
	Base* bp = new Derived2;
	delete bp;
}
