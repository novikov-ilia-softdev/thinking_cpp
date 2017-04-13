#include <iostream>

class Int{
public:
	Int( int i = 0): i_( i) {}
	const Int operator+(const Int& right) const;
	const Int operator-(const Int& right) const;

	Int& operator++()
	{
		i_++;
		return *this;
	}

	const Int operator++( int)
	{
		Int before( i_);
		i_++;
		return before;
	}

	Int& operator--()
	{
		i_--;
		return *this;
	}

	const Int operator--( int)
	{
		Int before( i_);
		i_--;
		return before;
	}

	void print( std::ostream& stream);

private:
	int i_;
};

const Int Int::operator+(const Int& right) const
{
	return Int( i_ + right.i_);
}

const Int Int::operator-(const Int& right) const
{
	return Int( i_ - right.i_);
}

void Int::print( std::ostream& stream)
{
	stream << i_ << std::endl;
}

int main()
{
	Int a = 1;
	Int b = 2;
	Int c = 3;
	Int d = 4;

	std::cout << "a: "; a.print( std::cout);
	std::cout << "b: "; b.print( std::cout);
	std::cout << "c: "; c.print( std::cout);
	std::cout << "d: "; d.print( std::cout);

	Int e = ++a + b++ - --c + d--;
	std::cout << "++a + b++ - --c + d--: "; e.print( std::cout);

	std::cout << "a: "; a.print( std::cout);
	std::cout << "b: "; b.print( std::cout);
	std::cout << "c: "; c.print( std::cout);
	std::cout << "d: "; d.print( std::cout);
}
