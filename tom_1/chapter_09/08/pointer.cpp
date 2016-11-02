#include "pointer.h"

Pointer::Pointer( Holder* h): _h( h), _p( h->_a)
{

}

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
	_p =  &( _h->_a[ Holder::_size - 1]);
}

void Pointer::end()
{
	_p =  &( _h->_a[ 0]);
}

int Pointer::read()
{
	return *_p;
}

void Pointer::set( int i)
{
	*_p = i;
}
