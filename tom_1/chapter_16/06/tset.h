#ifndef TSET_H
#define TSET_H

#include <vector>
#include <iostream>

template<class T>
class Set{
private:
	std::vector<T> vector_;

public:
	void insert( T);
	void erase( T);

	class iterator;
	friend class iterator;
	class iterator{
	private:
		const Set<T>& set_;
		int index_;

	public:
		iterator( const Set<T>& set, bool begin): set_( set)
		{
			index_ = begin ? 0 : set_.vector_.size();
		}
		iterator( const iterator& it): set_( it.set_), index_( it.index_) {}

		bool operator++()
		{
			if( index_ < set_.vector_.size())
				index_++;
		}

		bool operator++( int) { return operator++(); }

		T current() const
		{
			return set_.vector_[ index_];
		}

		T operator->() const { return current(); }
		T operator*() const { return current(); }

		operator bool() const { return index_ != -1; }
		bool operator==(const iterator& right) { return ( index_ == right.index_); }
		bool operator!=(const iterator& right) { return !(*this == right); }
	};

	iterator begin() const
	{
		return iterator(*this, true);
	}

	iterator end() const
	{
		return iterator(*this, false);
	}
};

template<class T>
void Set<T>::insert( T t)
{
	for( int i = 0; i < vector_.size(); i++)
	{
		if( vector_[ i] == t)
			return;
	}

	vector_.push_back( t);
}

template<class T>
void Set<T>::erase( T t)
{
	for( int i = 0; i < vector_.size(); i++)
	{
		if( vector_[ i] == t)
		{
			vector_.erase( vector_.begin() + i);
			return;
		}
	}
}

#endif // TSET_H
