#include <iostream>

class Number{
public:
	Number( double d = 0.0): d_( d) {}
	const Number operator+(const Number& right) const;
	const Number operator-(const Number& right) const;
	const Number operator*(const Number& right) const;
	const Number operator/(const Number& right) const;
	Number& operator=(const Number& right);
	operator double() const
	{
		return d_;
	}

	friend std::ostream& operator<<( std::ostream& stream, Number& d);

private:
	double d_;
};

const Number Number::operator+(const Number& right) const
{
	return Number( d_ + right.d_);
}

const Number Number::operator-(const Number& right) const
{
	return Number( d_ - right.d_);
}

const Number Number::operator*(const Number& right) const
{
	return Number( d_ * right.d_);
}

const Number Number::operator/(const Number& right) const
{
	return Number( d_ / right.d_);
}

Number& Number::operator=(const Number& right)
{
	std::cout << "Number::operator=" << std::endl;
	if( &right == this)
		return *this;

	d_ = right.d_;
	return *this;
}

std::ostream& operator<<( std::ostream& stream, Number& d)
{
	stream << d.d_;
}

void func( double d)
{
	std::cout << "func: " << d << std::endl;
}

int main()
{
	Number a = 1.0;
	Number b = 2.0;
	Number c = 3.0;
	Number d = 4.0;
	Number e = 5.0;
	Number f = a + b - c * d / e;
	Number g = 3.14;
	g = f;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;

	std::cout << "f = a + b - c * d / e: " << f << std::endl;
	std::cout << "g = f: " << g << std::endl;

	func( g);
}
