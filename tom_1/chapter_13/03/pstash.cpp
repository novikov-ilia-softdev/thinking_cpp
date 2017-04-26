#include "pstash.h"
#include <cstring>
#include <iostream>

PStash::PStash(): quantity_( 0), storage_( 0), next_( 0)
{

}

PStash::~PStash()
{
	std::cout << "PStash::~PStash" << std::endl;
	delete [] storage_;
}

int PStash::add( void* element)
{
	const int inflateSize = 10;
	if( next_ >= quantity_)
		inflate( inflateSize);

	storage_[ next_++] = element;
	return ( next_ - 1);
}

void* PStash::operator[]( int index) const
{
	if( index >= next_ || index < 0)
		return 0;

	return storage_[ index];
}

void* PStash::remove( int index)
{
	void* v = operator[]( index);
	if( v != 0)
		storage_[ index] = 0;

	return v;
}

int PStash::count() const
{
	return next_;
}

void PStash::inflate( int increase)
{
	const int psz = sizeof( void*);
	void **st = new void*[ quantity_ + increase];
	memset( st, 0, (quantity_ + increase) * psz);
	memcpy( st, storage_, quantity_ * psz);
	quantity_ += increase;
	delete [] storage_;
	storage_ = st;
}
