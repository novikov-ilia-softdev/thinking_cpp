#include <iostream>

class One{
public:
	One( int i): i_( i) {}
	friend const One operator+( const One& left, const One& right);
	friend std::ostream& operator<<( std::ostream& stream, const One& i);

private:
	int i_;
};

class Two{
public:
	Two( int i): i_( i) {}
	operator One() const
	{
		return One( i_);
	}

private:
	int i_;
};

const One operator+( const One& left, const One& right)
{
	return One( left.i_ + right.i_);
}

std::ostream& operator<<( std::ostream& stream, const One& i)
{
	return stream << i.i_;
}

int main()
{
	One n1 = 5;
	Two n2 = 3;

	std::cout << "n1 = " << n1 << std::endl;
	std::cout << "n2 = " << n2 << std::endl;
	std::cout << "n1 + n2 = " << n1 + n2 << std::endl;
	std::cout << "n1 + 2 = " << n1 + 2 << std::endl;
	std::cout << "3 + n2 = " << 3 + n2 << std::endl;
	std::cout << "n2 + n1 = " << n2 + n1 << std::endl;
	std::cout << "n2 + 2 = " << n2 + 2 << std::endl;
	std::cout << "3 + n1 = " << 3 + n1 << std::endl;
	std::cout << "6 + 7 = " << 6 + 7 << std::endl;
}
