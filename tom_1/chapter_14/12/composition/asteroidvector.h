#ifndef ASTEROIDVECTOR_H
#define ASTEROIDVECTOR_H

#include <vector>
#include "asteroid.h"

typedef std::vector<void*> vectorVoid;

class AsteroidVector{
public:
	void push_back( Asteroid* ptr);
	Asteroid* operator[]( int index);
	int size() const;
	void clear();


private:
	vectorVoid vector_;
};

#endif // ASTEROIDVECTOR_H
