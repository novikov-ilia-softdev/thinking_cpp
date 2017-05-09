#include <iostream>

#define CLASS(ID) class ID{ \
public: \
	ID(int) { std::cout << #ID << " constructor" << std::endl; } \
	virtual void f() { std::cout << #ID << " f" << std::endl; } \
	virtual ~ID() { std::cout << #ID << " destructor" << std::endl; } \
};

CLASS(Base1);
CLASS(Member1);
CLASS(Member2);
CLASS(Member3);
CLASS(Member4);

class Derived1: public Base1{
public:
	Derived1( int): m2_( 1), m1_( 2), Base1( 3)
	{
		std::cout << "Derived1 constructor" << std::endl;
	}

	void f() { std::cout << "Derived1::f" << std::endl; }

	~Derived1()
	{
		std::cout << "Derived1 destructor" << std::endl;
	}

private:
	Member1 m1_;
	Member2 m2_;
};

class Derived2: public Derived1{
public:
	Derived2( int): m3_( 1), Derived1( 2), m4_( 3)
	{
		std::cout << "Derived2 constructor" << std::endl;
	}

	void f() { std::cout << "Derived2::f" << std::endl; }

	~Derived2()
	{
		std::cout << "Derived2 destructor" << std::endl;
	}

private:
	Member3 m3_;
	Member4 m4_;
};

int main()
{
	Base1* bp1 = new Derived1( 5);
	bp1->f();
	delete bp1;

	std::cout << std::endl;

	Base1* bp2 = new Derived2( 7);
	bp2->f();
	delete bp2;
}
