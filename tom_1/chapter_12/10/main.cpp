#include <iostream>

class Int{
public:
	Int( int i = 0): i_( i) {}
	const Int operator+(const Int& right) const;
	const Int operator-(const Int& right) const;
	friend std::ostream& operator<<( std::ostream& stream, const Int& i);
	friend std::istream& operator>>( std::istream& stream, Int& i);

	Int& operator++()
	{
		i_++;
		return *this;
	}

	const Int operator++( int a)
	{
		std::cout << "a: " << a << std::endl;
		Int before( i_);
		i_++;
		return before;
	}

	Int& operator--()
	{
		i_--;
		return *this;
	}

	const Int operator--( int a)
	{
		std::cout << "a: " << a << std::endl;
		Int before( i_);
		i_--;
		return before;
	}

private:
	int i_;
};

std::ostream& operator<<( std::ostream& stream, const Int& i)
{
	stream << i.i_;
}

std::istream& operator>>( std::istream& stream, Int& i)
{
	stream >> i.i_;
}

const Int Int::operator+(const Int& right) const
{
	return Int( i_ + right.i_);
}

const Int Int::operator-(const Int& right) const
{
	return Int( i_ - right.i_);
}

int main()
{
	Int a( 5);
	a++;
	a--;
}
