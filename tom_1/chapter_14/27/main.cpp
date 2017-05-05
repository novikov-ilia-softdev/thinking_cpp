#include <iostream>

class Subject{
public:
	virtual void f() {}
	virtual void g() {}
	virtual void h() {}
};

class Proxy: public Subject{
public:
	Proxy( Subject* subject): subject_( subject) {}
	void f() { subject_->f();}
	void g() { subject_->g();}
	void h() { subject_->h();}
	void setImpl( Subject* subject)
	{
		subject_ = subject;
	}

private:
	Subject* subject_;
};

class Imp1: public Subject{
public:
	void f() { std::cout << "Imp1::f" << std::endl; }
	void g() { std::cout << "Imp1::g" << std::endl;}
	void h() { std::cout << "Imp1::h" << std::endl;}
};

class Imp2: public Subject{
public:
	void f() { std::cout << "Imp2::f" << std::endl; }
	void g() { std::cout << "Imp2::g" << std::endl;}
	void h() { std::cout << "Imp2::h" << std::endl;}
};

int main()
{
	Imp1 imp1;
	Proxy proxy1( &imp1);
	proxy1.f();

	Imp2 imp2;
	Proxy proxy2( &imp2);
	proxy2.g();

	proxy1.setImpl( &imp2);
	proxy2.setImpl( &imp1);
	proxy1.f();
	proxy2.g();
}
