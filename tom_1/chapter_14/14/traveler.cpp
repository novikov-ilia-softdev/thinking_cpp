#include "traveler.h"

Traveler::Traveler( const std::string& str): str_( str)
{
	std::cout << "Traveler( const std::string& str): " << str << std::endl;
}

Traveler::Traveler( const Traveler& right): str_( right.str_)
{
	std::cout << "Traveler( const Traveler& right): " << str_ << std::endl;
}

Traveler& Traveler::operator=( const Traveler& right)
{
	std::cout << "Traveler::operator=: " << right.str_ << std::endl;
	if( &right != this)
	{
		str_ = right.str_;
	}

	return *this;
}
