#include "asteroidpstash.h"

int AsteroidPStash::add( Asteroid* element)
{
	return stash_.add( element);
}

Asteroid* AsteroidPStash::operator[]( int index) const
{
	return (Asteroid*)stash_.operator []( index);
}

Asteroid* AsteroidPStash::remove( int index)
{
	return (Asteroid*)stash_.remove( index);
}

int AsteroidPStash::count() const
{
	return stash_.count();
}
