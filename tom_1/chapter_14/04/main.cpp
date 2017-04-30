#include <iostream>

class A{
public:
	A( int i): i_( i) { std::cout << "A" << std::endl; }
	~A() { std::cout << "~A" << std::endl; }
	void f() const { std::cout << "A::f, i = " << i_ << std::endl; }

private:
	int i_;
};

class B{
public:
	B( int i): i_( i) { std::cout << "B" << std::endl; }
	~B() { std::cout << "~B" << std::endl; }
	void f() const { std::cout << "B::f, i = " << i_ << std::endl; }

private:
	int i_;
};

class C: public B{
public:
	C( int i): B( i), a_( i) { std::cout << "C" << std::endl; }
	~C() { std::cout << "~C" << std::endl; }
	void f() const
	{
		std::cout << "C::f" << std::endl;
		a_.f();
		B::f();
	}

private:
	A a_;
};

class D: public C{
public:
	D( int i): C( i), b_( i) { std::cout << "D" << std::endl; }
	~D() { std::cout << "~D" << std::endl; }
	void f() const
	{
		std::cout << "D::f" << std::endl;
		b_.f();
		C::f();
	}

private:
	B b_;
};

int main()
{
	D d( 5);
	d.f();
}
