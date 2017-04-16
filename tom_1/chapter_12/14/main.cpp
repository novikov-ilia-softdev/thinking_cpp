#include <iostream>
#include <boost/lexical_cast.hpp>

class Bird{
public:
	Bird();
	Bird( const Bird& right);
	Bird& operator=(const Bird& right);
	friend std::ostream& operator<<( std::ostream& stream, Bird& b);

private:
	std::string str_;
	static int i_;
};

int Bird::i_ = 0;

Bird::Bird()
{
	str_ = "Bird#" + boost::lexical_cast<std::string>( ++i_);
}

Bird::Bird( const Bird& right)
{
	str_ = right.str_;
}

Bird& Bird::operator=(const Bird& right)
{
	if( &right == this)
		return *this;

	str_ = right.str_;
	return *this;
}

std::ostream& operator<<( std::ostream& stream, Bird& b)
{
	stream << b.str_ << " ";
}

int main()
{
	Bird bird1, bird2, bird3;
	std::cout << bird1 << bird2 << bird3 << std::endl;
	bird2 = bird3;
	Bird bird4( bird1);
	std::cout << bird1 << bird2 << bird3 << bird4 << std::endl;
}
