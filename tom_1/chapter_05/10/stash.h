#ifndef STASH_H
#define STASH_H

class Stash{
private:
	int size;
	int quantity;
	int next;
	unsigned char* storage;

public:
	void initialize( int sz);
	void cleanup();
	int add( const void* element);
	void* fetch( int index);
	int count();
	void inflate( int increase);
};

#endif // STASH_H
