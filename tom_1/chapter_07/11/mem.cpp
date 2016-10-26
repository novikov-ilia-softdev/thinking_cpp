#include "mem.h"
#include <cstring>

Mem::Mem( int sz): _mem( 0), _size( 0), _isMoved( false)
{
	ensureMinSize( sz);
}

Mem::~Mem()
{
	delete [] _mem;
}

int Mem::msize()
{
	return _size;
}

byte* Mem::pointer( int minSize)
{
	ensureMinSize( minSize);
	return _mem;
}

void Mem::ensureMinSize( int minSize)
{
	if( _size < minSize)
	{
		byte* newMem = new byte[ minSize];
		memset( newMem + _size, 0, minSize - _size);
		memcpy( newMem, _mem, _size);
		delete [] _mem;
		_mem = newMem;
		_size = minSize;
		_isMoved = true;
	}
	else{
		_isMoved = false;
	}
}

bool Mem::isMoved()
{
	return _isMoved;
}
