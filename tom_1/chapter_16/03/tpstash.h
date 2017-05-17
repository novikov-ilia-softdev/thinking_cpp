#ifndef TPSTASH_H
#define TPSTASH_H

#include <cstring>

template<class T, int incr = 5>
class PStash{
private:
	int quantity_;
	int next_;
	T** storage_;
	int increase_;
	void inflate_( int increase = incr);

public:
	PStash(): quantity_( 0), next_( 0), storage_( 0), increase_( incr) {}
	~PStash();
	int add( T* element);
	T* operator[]( int index) const;
	T* remove( int index);
	int count() const { return next_; }
	int getIncrease() const { return increase_; }
	void setIncrease( int increase) { increase_ = increase; }
};

template<class T, int incr>
int PStash<T, incr>::add( T* element)
{
	if( next_ >= quantity_)
		inflate_( increase_);

	storage_[ next_++] = element;
}

template<class T, int incr>
PStash<T, incr>::~PStash()
{
	for( int i = 0; i < next_; i++)
	{
		delete storage_[ i];
		storage_[ i] = 0;
	}

	delete [] storage_;
}

template<class T, int incr>
T* PStash<T, incr>::operator[]( int index) const
{
	if( index >= 0 && index < next_)
	{
		return storage_[ index];
	}

	return 0;
}

template<class T, int incr>
T* PStash<T, incr>::remove( int index)
{
	T* v = operator[](index);
	if( v != 0)
		storage_[ index] = 0;

	return v;
}

template<class T, int incr>
void PStash<T, incr>::inflate_( int increase)
{
	std::cout << "PStash::inflate_ " << increase << std::endl;
	const int psz = sizeof( T*);
	T** st = new T * [quantity_ + increase];
	memset( st, 0, (quantity_ + increase) * psz);
	memcpy( st, storage_, quantity_ * psz);
	quantity_ += increase;
	delete [] storage_;
	storage_ = st;
}

#endif // TPSTASH_H
