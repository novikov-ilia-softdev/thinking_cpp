#include "asteroidvector.h"

void AsteroidVector::push_back( Asteroid* ptr)
{
	std::cout << "AsteroidVector::push_back" << std::endl;
	vectorVoid::push_back( ptr);
}

Asteroid* AsteroidVector::operator[]( int index)
{
	std::cout << "AsteroidVector::operator[]" << std::endl;
	return (Asteroid*)vectorVoid::operator[]( index);
}
