#include <iostream>
#include <boost/lexical_cast.hpp>

class Bird{
public:
	Bird( int number = 0);
	Bird( const Bird& right);
	Bird& operator=(const Bird& right);
	friend std::ostream& operator<<( std::ostream& stream, Bird& b);
	int getNumber() const
	{
		return number_;
	}

	const Bird operator+(const Bird& right) const;
	const Bird operator-(const Bird& right) const;
	const Bird operator*(const Bird& right) const;
	const Bird operator/(const Bird& right) const;

private:
	std::string str_;
	static int i_;
	int number_;
};

int Bird::i_ = 0;

Bird::Bird( int number): number_( number)
{
	i_++;
	str_ = "Bird#" + boost::lexical_cast<std::string>( i_);
	number_ = number ? number : i_;
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
	stream << "Bird: " << b.number_;
}

const Bird Bird::operator+(const Bird& right) const
{
	return Bird( number_ + right.number_);
}

const Bird Bird::operator-(const Bird& right) const
{
	return Bird( number_ - right.number_);
}

const Bird Bird::operator*(const Bird& right) const
{
	return Bird( number_ * right.number_);
}

const Bird Bird::operator/(const Bird& right) const
{
	return Bird( number_ / right.number_);
}

class BirdHouse{
public:
	BirdHouse( Bird birdObj, Bird* birdPtr, Bird& birdRef);
	friend std::ostream& operator<<( std::ostream& stream, BirdHouse& h);

private:
	BirdHouse( const BirdHouse& birdHouse);
	BirdHouse& operator=(const BirdHouse& birdHouse);

	Bird birdObj_;
	Bird* birdPtr_;
	Bird& birdRef_;
	int number_;
};

BirdHouse::BirdHouse( Bird birdObj, Bird* birdPtr, Bird& birdRef):
	birdObj_( birdObj), birdPtr_( birdPtr), birdRef_( birdRef), number_( birdObj_.getNumber() + birdPtr_->getNumber() + birdRef_.getNumber())
{

}

std::ostream& operator<<( std::ostream& stream, BirdHouse& h)
{
	stream << "BirdHouse: " << h.number_;
}

int main()
{
	Bird bird1, bird2, bird3;
	BirdHouse house( bird1, &bird2, bird3);
	Bird bird4 = bird1 + bird3 - bird2;
	std::cout << bird4 << std::endl;
}
