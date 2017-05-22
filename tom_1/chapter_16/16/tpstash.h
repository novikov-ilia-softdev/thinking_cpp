#ifndef TPSTASH_H
#define TPSTASH_H

#include <vector>

template<class T>
class PStash{
private:
	std::vector<T*> storage_;

public:
	PStash() {}
	~PStash();
	int add( T* element);
	T* operator[]( int index) const;
	T* remove( int index);
	int count() const { return storage_.size(); }

	class iterator;
	friend class iterator;
	class iterator{
	private:
		PStash& ps_;
		int index_;

	public:
		iterator( PStash& ps): ps_( ps), index_( 0) {}
		iterator( PStash& ps, bool): ps_( ps), index_( ps.storage_.size()) {}
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
			if( index_ < ps_.storage_.size())
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
			if( targetIndex < ps_.storage_.size() && targetIndex >= 0)
				index_ = targetIndex;

			return *this;
		}
		iterator& operator-=( int amount)
		{
			int targetIndex = index_ - amount;
			if( targetIndex < ps_.storage_.size() && targetIndex >= 0)
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

template<class T>
int PStash<T>::add( T* element)
{
	storage_.push_back( element);
}

template<class T>
PStash<T>::~PStash()
{
	for( int i = 0; i < storage_.size(); i++)
	{
		delete storage_[ i];
		storage_[ i] = 0;
	}
}

template<class T>
T* PStash<T>::operator[]( int index) const
{
	if( index >= 0 && index < storage_.size())
	{
		return storage_[ index];
	}

	return 0;
}

template<class T>
T* PStash<T>::remove( int index)
{
	T* v = operator[](index);
	if( v != 0)
		storage_[ index] = 0;

	return v;
}

#endif // TPSTASH_H
