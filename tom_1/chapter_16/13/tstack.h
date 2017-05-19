#ifndef TSTACK_H
#define TSTACK_H

#include <stack>

template<class T> class Stack{
private:
	typedef std::stack<T*> strPtrContainer;
	strPtrContainer container_;

public:
	Stack() {}
	~Stack();

	void push( T* dat)
	{
		container_.push( dat);
	}

	T* peek() const
	{
		if( container_.empty())
			return 0;

		return container_.top();
	}

	T* pop();

	class iterator;
	friend class iterator;
	class iterator{
	private:
		const strPtrContainer* container_;

	public:
		iterator( const Stack<T>& stack, bool begin): container_( &stack.container_)
		{
			if( container_->empty())
				index_ = -1;
			else
				index_ = begin ? container_->size() - 1 : -1;
		}
		iterator( const iterator& it): container_( it.container_), index_( it.index_) {}

		bool operator++()
		{
			if( container_->empty())
				index_ = -1;

			if( index_ >= 0)
				index_--;

			return index_ == -1;
		}

		bool operator++( int) { return operator++(); }

		T* current() const{
			if( container_->empty())
				return 0;

			if( index_ == -1)
				return 0;

			return container_->operator[]( index_);
		}

		T* operator->() const { return current(); }
		T* operator*() const { return current(); }

		operator bool() const { return index_ == -1; }
		bool operator==(const iterator& right){ return (container_ == right.container_ && index_ == right.index_); }
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
	while( !container_.empty())
	{
		delete pop();
	}
}

template<class T> T* Stack<T>::pop()
{
	if( container_.empty())
		return 0;

	T* t = container_[ container_.size() - 1];
	container_.pop();
	return t;
}

#endif // TSTACK_H
