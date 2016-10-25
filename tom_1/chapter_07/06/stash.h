#ifndef STASH_H
#define STASH_H

class Stash{
private:
	int size;
	int quantity;
	int next;
	unsigned char* storage;

	void initialize( int sz);
	void cleanup();
	void inflate( int increase);

public:
	Stash( int sz, int initQuantity = 0);
	~Stash();

	int add( const void* element);
	void* fetch( int index);
	int count();
};

#endif // STASH_H
