#include <iostream>

#define CLASS(ID) class ID{ \
public: \
	ID(int) { std::cout << #ID << " constructor" << std::endl; } \
	~ID() { std::cout << #ID << " destructor" << std::endl; } \
};

CLASS(Base1);
CLASS(Member1);
CLASS(Member2);
CLASS(Member3);
CLASS(Member4);
CLASS(Member5);

class Derived1: public Base1{
public:
	Derived1( int): m2_( 1), m1_( 2), Base1( 3)
	{
		std::cout << "Derived1 constructor" << std::endl;
	}

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

	~Derived2()
	{
		std::cout << "Derived2 destructor" << std::endl;
	}

private:
	Member3 m3_;
	Member4 m4_;
};

class Derived3: public Derived2{
public:
	Derived3( int): m4_( 1), m5_(2), Derived2( 3)
	{
		std::cout << "Derived3 constructor" << std::endl;
	}

	~Derived3()
	{
		std::cout << "Derived3 destructor" << std::endl;
	}

private:
	Member4 m4_;
	Member5 m5_;
};

int main()
{
	Derived3 d( 5);
}
