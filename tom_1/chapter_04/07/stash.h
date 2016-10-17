#ifndef STASH_H
#define STASH_H

struct Stash{
	int size;
	int quantity;
	int next;
	unsigned char* storage;

	void initialize( int sz);
	void cleanup();
	int add( const void* element);
	void* fetch( int index);
	int count();
	void inflate( int increase);
};

#endif // STASH_H
