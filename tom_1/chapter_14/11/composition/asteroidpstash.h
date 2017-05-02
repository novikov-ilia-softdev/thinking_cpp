#ifndef ASTEROIDPSTASH_H
#define ASTEROIDPSTASH_H

#include "pstash.h"
#include "asteroid.h"

class AsteroidPStash{
public:
	int add( Asteroid* element);
	Asteroid* operator[]( int index) const;
	Asteroid* remove( int index);
	int count() const;

private:
	PStash stash_;
};

#endif // ASTEROIDPSTASH_H
