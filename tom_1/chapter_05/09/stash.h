#ifndef STASH_H
#define STASH_H

#include <vector>

class Stash{
private:
	int size;
	std::vector<char> storage;

public:
	void initialize( int sz);
	void cleanup();
	int add( const void* element);
	void* fetch( int index);
	int count();
};

#endif // STASH_H
