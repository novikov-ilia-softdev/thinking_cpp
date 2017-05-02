#include <iostream>
#include "asteroid.h"
#include "asteroidpstash.h"

// g++ main.cpp pstash.cpp asteroidpstash.cpp asteroid.cpp
int main()
{
	AsteroidPStash stash;
	for( int i = 0; i < 5; i++)
	{
		stash.add( new Asteroid());
	}

	for( int i = 0; i < stash.count(); i++)
	{
		((Asteroid*)stash[ i])->f();
	}

	for( int i = 0; i < stash.count(); i++)
	{
		delete (Asteroid*)stash.remove( i);
	}
}
