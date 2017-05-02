#include "asteroidvector.h"

void AsteroidVector::push_back( Asteroid* ptr)
{
	std::cout << "AsteroidVector::push_back" << std::endl;
	vector_.push_back( ptr);
}

Asteroid* AsteroidVector::operator[]( int index)
{
	std::cout << "AsteroidVector::operator[]" << std::endl;
	return (Asteroid*)vector_.operator[]( index);
}

int AsteroidVector::size() const
{
	return vector_.size();
}

void AsteroidVector::clear()
{
	vector_.clear();
}
