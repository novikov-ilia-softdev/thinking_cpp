#ifndef STASH_H
#define STASH_H

#include <vector>

struct Stash{
	int size;
	std::vector<char> storage;

	void initialize( int sz);
	void cleanup();
	int add( const void* element);
	void* fetch( int index);
	int count();
	void print();
};

#endif // STASH_H
