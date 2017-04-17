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
};

BirdHouse::BirdHouse( Bird birdObj, Bird* birdPtr, Bird& birdRef):
	birdObj_( birdObj), birdPtr_( birdPtr), birdRef_( birdRef)
{

}

std::ostream& operator<<( std::ostream& stream, BirdHouse& h)
{
	stream << h.birdObj_ << " " << *h.birdPtr_ << " " << h.birdRef_;
}

int main()
{
	Bird bird1, bird2, bird3;
	BirdHouse house( bird1, &bird2, bird3);
	std::cout << house << std::endl;
}
