#ifndef ASTEROIDVECTOR_H
#define ASTEROIDVECTOR_H

#include <vector>
#include "asteroid.h"

typedef std::vector<void*> vectorVoid;

class AsteroidVector: public vectorVoid{
public:
	void push_back( Asteroid* ptr);
	Asteroid* operator[]( int index);
};

#endif // ASTEROIDVECTOR_H
