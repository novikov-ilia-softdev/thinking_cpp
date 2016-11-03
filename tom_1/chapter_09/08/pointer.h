#ifndef POINTER_H
#define POINTER_H

#include "holder.h"

class Pointer{
public:
	Pointer( Holder* h);
	inline void next();
	inline void previous();
	inline void top();
	inline void end();
	inline int read();
	inline void set( int i);

private:
	Holder* _h;
	int* _p;
};

void Pointer::next()
{
	if( _p < &( _h->_a[ Holder::_size - 1]))
		_p++;
}

void Pointer::previous()
{
	if( _p > &( _h->_a[ 0]))
		_p--;
}

void Pointer::top()
{
	_p =  &( _h->_a[ 0]);

}

void Pointer::end()
{
	_p =  &( _h->_a[ Holder::_size - 1]);
}

int Pointer::read()
{
	return *_p;
}

void Pointer::set( int i)
{
	*_p = i;
}


#endif // POINTER_H
