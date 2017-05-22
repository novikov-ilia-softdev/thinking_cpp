#ifndef TPSTASH_H
#define TPSTASH_H

#include <cstring>

template<class T, int incr = 5>
class PStash{
private:
	int quantity_;
	int next_;
	T** storage_;
	void inflate_( int increase = incr);

public:
	PStash(): quantity_( 0), next_( 0), storage_( 0) {}
	~PStash();
	int add( T* element);
	T* operator[]( int index) const;
	T* remove( int index);
	int count() const { return next_; }

	class iterator;
	friend class iterator;
	class iterator{
	private:
		PStash& ps_;
		int index_;

	public:
		iterator( PStash& ps): ps_( ps), index_( 0) {}
		iterator( PStash& ps, bool): ps_( ps), index_( ps.next_) {}
		iterator( const iterator& right): ps_( right.ps_), index_( right.index_) {}
		iterator& operator=( const iterator& right)
		{
			if( this != &right)
			{
				ps_ = right.ps_;
				index_ = right.index_;
			}

			return *this;
		}
		iterator& operator++()
		{
			if( index_ < ps_.next_)
				index_++;

			return *this;
		}
		iterator& operator++( int)
		{
			return operator++();
		}
		iterator& operator--()
		{
			if( index_ > 0)
				index_--;

			return *this;
		}
		iterator& operator--( int)
		{
			return operator--();
		}
		iterator& operator+=( int amount)
		{
			int targetIndex = index_ + amount;
			if( targetIndex < ps_.next_ && targetIndex >= 0)
				index_ = targetIndex;

			return *this;
		}
		iterator& operator-=( int amount)
		{
			int targetIndex = index_ - amount;
			if( targetIndex < ps_.next_ && targetIndex >= 0)
				index_ = targetIndex;

			return *this;
		}
		iterator operator+( int amount) const
		{
			iterator ret( *this);
			ret += amount;
			return ret;
		}
		iterator operator-( int amount) const
		{
			iterator ret( *this);
			ret -= amount;
			return ret;
		}
		T* current() const
		{
			return ps_.storage_[ index_];
		}
		T* operator*() const
		{
			return current();
		}
		T* operator->() const
		{
			return current();
		}
		T* remove()
		{
			return ps_.remove( index_);
		}
		bool operator==( const iterator& right)
		{
			return (index_ == right.index_);
		}
		bool operator!=( const iterator& right)
		{
			return !( *this == right);
		}
	};

	iterator begin() { return iterator( *this); }
	iterator end() { return iterator( *this, true); }
};

template<class T, int incr>
int PStash<T, incr>::add( T* element)
{
	if( next_ >= quantity_)
		inflate_( incr);

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
	const int psz = sizeof( T*);
	T** st = new T * [quantity_ + increase];
	memset( st, 0, (quantity_ + increase) * psz);
	memcpy( st, storage_, quantity_ * psz);
	quantity_ += increase;
	delete [] storage_;
	storage_ = st;
}

#endif // TPSTASH_H
