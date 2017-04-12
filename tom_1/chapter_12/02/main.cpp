#include <iostream>

class Int{
public:
	Int( int i = 0): i_( i) {}
	const Int operator+(const Int& right) const;
	void print( std::ostream& stream);

private:
	int i_;
};

const Int Int::operator+(const Int& right) const
{
	return Int( i_ + right.i_);
}

void Int::print( std::ostream& stream)
{
	stream << i_ << std::endl;
}

int main()
{
	Int a = 5;
	Int b = 3;
	Int c = a + b;
	c.print( std::cout);
}
