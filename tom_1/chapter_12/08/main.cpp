#include <iostream>

class Int{
public:
	Int( int i = 0): i_( i) {}
	const Int operator+(const Int& right) const;
	const Int operator-() const;
	friend std::ostream& operator<<( std::ostream& stream, Int& i);

private:
	int i_;
};

const Int Int::operator+(const Int& right) const
{
	return Int( i_ + right.i_);
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
	Int c = a + (-b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c = a + (-b): " << c << std::endl;
}
