#ifndef TSTACK_H
#define TSTACK_H

#include <vector>

template<class T> class Stack{
private:
	std::vector<T*> vector_;
	bool owner_;

public:
	Stack(): owner_( true) {}
	~Stack();

	bool isOwner() const { return owner_; }
	void setOwner( bool owner) { owner_ = owner;}

	void push( T* dat)
	{
		vector_.push_back( dat);
	}

	T* peek() const
	{
		if( vector_.size())
		{
			T* t = vector_[ vector_.size() - 1];
			return t;
		}

		return 0;
	}

	T* pop()
	{
		if( vector_.size())
		{
			T* t = vector_[ vector_.size() - 1];
			vector_.pop_back();
			return t;
		}

		return 0;
	}

	class iterator;
	friend class iterator;
	class iterator{
	private:
		const std::vector<T*>* p_;
		int index_;

	public:
		iterator( const Stack<T>& stack, bool begin): p_( &stack.vector_)
		{
			if( !p_->size())
				index_ = -1;
			else
				index_ = begin ? p_->size() - 1 : -1;
		}
		iterator( const iterator& it): p_( it.p_), index_( it.index_) {}

		bool operator++()
		{
			if( index_ > -1)
				index_--;

			return index_ == -1;
		}

		bool operator++( int) { return operator++(); }

		T* current() const{
			if( index_ != -1)
				return p_->operator[]( index_);

			return 0;
		}

		T* operator->() const { return current(); }
		T* operator*() const { return current(); }

		operator bool() const { return index_ == -1; }
		bool operator==(const iterator& right)
		{
			return (p_ == right.p_ && index_ == right.index_);
		}
		bool operator!=(const iterator& right)
		{
			return !(*this == right);
		}
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
	if( owner_)
	{
		for( int i = 0; i < vector_.size(); i++)
		{
			delete vector_[ i];
		}

		vector_.clear();
	}
}

#endif // TSTACK_H
