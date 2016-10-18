#ifndef STASH_H
#define STASH_H

#include <vector>

struct Stash{
	int size;
	int quantity;
	int next;
	std::vector<char> storage;

	void initialize( int sz);
	void cleanup();
	int add( const void* element);
	void* fetch( int index);
	int count();
};

#endif // STASH_H
