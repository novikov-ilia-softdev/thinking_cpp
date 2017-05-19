#ifndef TSTACK_H
#define TSTACK_H

#include <vector>

template<class T> class Stack{
private:
	typedef std::vector<T*> strPtrVector;
	strPtrVector vector_;

public:
	Stack() {}
	~Stack();

	void push( T* dat)
	{
		vector_.push_back( dat);
	}

	T* peek() const
	{
		if( vector_.empty())
			return 0;

		return vector_[ vector_.size() - 1];
	}

	T* pop();

	class iterator;
	friend class iterator;
	class iterator{
	private:
		const strPtrVector* vector_;
		int index_;

	public:
		iterator( const Stack<T>& stack, bool begin): vector_( &stack.vector_)
		{
			if( vector_->empty())
				index_ = -1;
			else
				index_ = begin ? vector_->size() - 1 : -1;
		}
		iterator( const iterator& it): vector_( it.vector_), index_( it.index_) {}

		bool operator++()
		{
			if( vector_->empty())
				index_ = -1;

			if( index_ >= 0)
				index_--;

			return index_ == -1;
		}

		bool operator++( int) { return operator++(); }

		T* current() const{
			if( vector_->empty())
				return 0;

			if( index_ == -1)
				return 0;

			return vector_->operator[]( index_);
		}

		T* operator->() const { return current(); }
		T* operator*() const { return current(); }

		operator bool() const { return index_ == -1; }
		bool operator==(const iterator& right){ return (vector_ == right.vector_ && index_ == right.index_); }
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

template<class T> Stack<T>::~Stack()
{
	while( !vector_.empty())
	{
		delete pop();
	}
}

template<class T> T* Stack<T>::pop()
{
	if( vector_.empty())
		return 0;

	T* t = vector_[ vector_.size() - 1];
	vector_.pop_back();
	return t;
}

#endif // TSTACK_H
