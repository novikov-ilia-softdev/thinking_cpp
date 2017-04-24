#include <iostream>

class Number{
public:
	Number( int i): i_( i) {}
	friend const Number operator*( const Number& left, const Number& right);
	friend std::ostream& operator<<( std::ostream& stream, const Number& i);

private:
	int i_;
};

const Number operator*( const Number& left, const Number& right)
{
	return Number( left.i_ * right.i_);
}

std::ostream& operator<<( std::ostream& stream, const Number& i)
{
	return stream << i.i_;
}

int main()
{
	Number n1 = 5;
	Number n2 = 3;

	std::cout << "n1 = " << n1 << std::endl;
	std::cout << "n2 = " << n2 << std::endl;
	std::cout << "n1 * n2 = " << n1 * n2 << std::endl;
	std::cout << "n1 * 2 = " << n1 * 2 << std::endl;
	std::cout << "3 * n2 = " << 3 * n2 << std::endl;
	std::cout << "6 * 7 = " << 6 * 7 << std::endl;
}
