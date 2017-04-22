#include <iostream>

class Int{
public:
	Int( int i = 0): i_( i) {}
	friend const Int operator+(const Int& left, const Int& right);
	friend const Int operator-(const Int& left, const Int& right);
	friend std::ostream& operator<<( std::ostream& stream, Int& i);
	const Int operator+() const;
	const Int operator-() const;



private:
	int i_;
};

const Int operator+(const Int& left, const Int& right)
{
	return Int( left.i_ + right.i_);
}

const Int operator-(const Int& left, const Int& right)
{
	return Int( left.i_ - right.i_);
}

const Int Int::operator+() const
{
	return Int( i_);
}

const Int Int::operator-() const
{
	return Int( -i_);
}

std::ostream& operator<<( std::ostream& stream, Int& i)
{
	stream << i.i_;
}

int main()
{
	Int a = 5;
	Int b = 3;
	Int c = 2;
	Int d = +a + -b - +c + +b - -c;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d = +a + -b - +c + +b - -c: " << d << std::endl;
}
