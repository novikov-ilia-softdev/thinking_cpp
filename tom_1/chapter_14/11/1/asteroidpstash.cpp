#include "asteroidpstash.h"

int AsteroidPStash::add( Asteroid* element)
{
	return PStash::add( element);
}

Asteroid* AsteroidPStash::operator[]( int index) const
{
	return (Asteroid*)PStash::operator []( index);
}

Asteroid* AsteroidPStash::remove( int index)
{
	return (Asteroid*)PStash::remove( index);
}
