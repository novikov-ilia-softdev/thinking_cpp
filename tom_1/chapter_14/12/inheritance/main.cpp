#include <iostream>
#include "asteroid.h"
#include "asteroidvector.h"

// g++ main.cpp asteroidvector.cpp asteroid.cpp
int main()
{
	AsteroidVector vector;
	for( int i = 0; i < 5; i++)
	{
		vector.push_back( new Asteroid());
	}

	for( int i = 0; i < vector.size(); i++)
	{
		((Asteroid*)vector[ i])->f();
	}

	for( int i = 0; i < vector.size(); i++)
	{
		delete (Asteroid*)vector[ i];
	}

	vector.clear();
}
