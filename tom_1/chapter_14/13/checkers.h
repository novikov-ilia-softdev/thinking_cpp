#ifndef CHECKERS_H
#define CHECKERS_H

#include "game.h"

class Checkers: public Game{
public:
	Checkers();
	Checkers( const Checkers&);
	Checkers& operator=( const Checkers&);
};

#endif // CHECKERS_H
