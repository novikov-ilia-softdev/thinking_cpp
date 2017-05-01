#include <iostream>

class Base{
public:
	void h() {}
	int h() const { return 1; }
	void h( const std::string&) { }
};

class Derived1: public Base{
public:
	void h() {}
};

class Derived2: public Base{
public:
	int h() const { return 1; }
};

class Derived3: public Base{
public:
	void h( const std::string&) { }
};

int main()
{
	std::string str( "hello");

	Derived1 d1;
	d1.h();
	//int x = d1.h();
	//d1.h( str);

	Derived2 d2;
	int x = d2.h();
	//d2.h( str);

	Derived3 d3;
	//d3.h();
	//int x = d3.h();
	d3.h( str);
}
