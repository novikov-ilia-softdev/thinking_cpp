#include <iostream>

class Parent{
public:
	Parent( int i = 0) : i_( i) { std::cout << "Parent()" << std::endl; }
	Parent( const Parent& right) : i_( right.i_) { std::cout << "Parent( const Parent& right)" << std::endl; }

	Parent& operator=( const Parent& right)
	{
		std::cout << "Parent& operator=( const Parent& right)" << std::endl;
		if( &right != this)
		{
			i_ = right.i_;
		}

		return *this;
	}

	friend std::ostream& operator<<( std::ostream& os, const Parent& right)
	{
		return os << "Parent: " << right.i_ << std::endl;
	}

private:
	int i_;
};

class Member{
public:
	Member( int i = 0) : i_( i) { std::cout << "Member()" << std::endl; }
	Member( const Member& right) : i_( right.i_) { std::cout << "Member( const Member& right)" << std::endl; }

	Member& operator=( const Member& right)
	{
		std::cout << "Member& operator=( const Member& right)" << std::endl;
		if( &right != this)
		{
			i_ = right.i_;
		}

		return *this;
	}

	friend std::ostream& operator<<( std::ostream& os, const Member& right)
	{
		return os << "Member: " << right.i_ << std::endl;
	}

private:
	int i_;
};

class Child: public Parent{
public:
	Child( int i = 0) : Parent( i), i_( i), m_( i) { std::cout << "Child()" << std::endl; }
	Child( const Child& right) : Parent( right), i_( right.i_), m_( right.m_) { std::cout << "Child( const Child& p)" << std::endl; }

	Child& operator=( const Child& right)
	{
		std::cout << "Child& operator=( const Child& right)" << std::endl;
		if( &right != this)
		{
			Parent::operator=( right);
			m_ = right.m_;
		}

		return *this;
	}

	friend std::ostream& operator<<( std::ostream& os, const Child& right)
	{
		return os << "Child: " << (Parent&)right << right.m_  << right.i_ << std::endl;
	}

private:
	int i_;
	Member m_;
};

class GrandChild: public Child{
public:
	GrandChild( int i = 0) : Child( i), m_( i) { std::cout << "GrandChild()" << std::endl; }
	GrandChild( const GrandChild& right) : Child( right), m_( right.m_) { std::cout << "GrandChild( const GrandChild& right)" << std::endl; }

	GrandChild& operator=( const GrandChild& right)
	{
		std::cout << "GrandChild& operator=( const GrandChild& right)" << std::endl;
		if( &right != this)
		{
			Child::operator=( right);
			m_ = right.m_;
		}

		return *this;
	}

	friend std::ostream& operator<<( std::ostream& os, const GrandChild& right)
	{
		return os << "GrandChild: " << (Parent&)right << (Child&)right << right.m_ << std::endl;
	}

private:
	Member m_;
};

int main()
{
	GrandChild c( 2);
	std::cout << std::endl;
	std::cout << "calling copy-constructor: " << std::endl;
	GrandChild c2 = c;
	std::cout << "c2: " << std::endl << c2;
	std::cout << std::endl;
	std::cout << "calling assignment operator: " << std::endl;
	c = c2;
	std::cout << "c: " << std::endl << c;
}
