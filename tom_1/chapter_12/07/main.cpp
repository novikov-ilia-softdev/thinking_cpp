#include <iostream>

class Int{
public:
	Int( int i = 0): i_( i) {}
	friend const Int operator+(const Int& left, const Int& right);
	friend const Int operator-(const Int& left, const Int& right);
	friend std::ostream& operator<<( std::ostream& stream, Int& i);

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

std::ostream& operator<<( std::ostream& stream, Int& i)
{
	stream << i.i_;
}

int main()
{
	Int a = 5;
	Int b = 3;
	Int c = a + b;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c = a + b: " << c << std::endl;
}
