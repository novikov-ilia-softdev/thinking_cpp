#ifndef MEM_H
#define MEM_H

typedef unsigned char byte;

class Mem{
private:
	byte* _mem;
	int _size;
	void ensureMinSize( int minSize);

public:
	Mem( int sz = 0);
	~Mem();

	int msize();
	byte* pointer( int minSize = 0);
};

#endif // MEM_H
