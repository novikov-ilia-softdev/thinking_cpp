#include <iostream>

class Base{
public:
	Base( int i = 0): i_( i) {}
	int value( int m) { return m * i_; }

protected:
	int read() const { return i_; }
	void set( int i) { i_ = i; }

private:
	int i_;
};

class Derived: protected Base{
public:
	Derived( int j = 0): j_( j) {}
	void change( int x) { set( x); }
	int get() const { return read(); }

private:
	int j_;
};

int main()
{
	Derived d;
	std::cout << d.get() << std::endl;
	d.change( 10);
	std::cout << d.get() << std::endl;
	//std::cout << d.value( 5) << std::endl;
}
