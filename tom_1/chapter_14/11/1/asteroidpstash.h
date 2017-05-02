#ifndef ASTEROIDPSTASH_H
#define ASTEROIDPSTASH_H

#include "pstash.h"
#include "asteroid.h"

class AsteroidPStash: public PStash{
public:
	int add( Asteroid* element);
	Asteroid* operator[]( int index) const;
	Asteroid* remove( int index);
};

#endif // ASTEROIDPSTASH_H
