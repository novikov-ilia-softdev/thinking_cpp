#ifndef STASH_H
#define STASH_H

#include "mem.h"

class Stash{
private:
	Mem* _buf;
	int _sizeOfElement;
	int _elementsCount;
	void print();

public:
	Stash( int sz);
	~Stash();

	int add( const void* element);
	void* fetch( int index);
	int count();
};

#endif // STASH_H
