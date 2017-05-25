#ifndef TSTACK_H
#define TSTACK_H

template<class T> class Stack{
private:
	struct Link{
		T* data;
		Link* next;
		bool isBelongToContainer;
		Link( T* dat, Link* nxt, bool belongToContainer): data( dat), next(nxt), isBelongToContainer( belongToContainer) {}
	}* head_;

public:
	Stack(): head_( 0) {}
	~Stack();

	void push( T* dat, bool belongToContainer = true)
	{
		head_ = new Link( dat, head_, belongToContainer);
	}

	T* peek() const
	{
		return head_ ? head_->data : 0;
	}

	bool getPeekBelongsToContainer() const { return head_ ? head_->isBelongToContainer : 0;  }
	void setPeekBelongsToContainer( bool belongToContainer)
	{
		if( head_)
			head_->isBelongToContainer = belongToContainer;
	}

	T* pop();

	class iterator;
	friend class iterator;
	class iterator{
	private:
		Stack::Link* p_;

	public:
		iterator( const Stack<T>& stack): p_( stack.head_) {}
		iterator( const iterator& it): p_( it.p_) {}
		iterator() : p_( 0) {}

		bool operator++()
		{
			if( p_->next)
				p_ = p_->next;
			else
				p_ = 0;

			return p_;
		}

		bool operator++( int) { return operator++(); }

		T* current() const{
			if( !p_)
				return 0;

			return p_->data;
		}

		T* operator->() const { return current(); }
		T* operator*() const { return current(); }

		operator bool() const { return bool( p_); }
		bool operator==(const iterator& right) { return p_ == right.p_; }
		bool operator!=(const iterator& right) { return p_ != right.p_; }
	};

	iterator begin() const
	{
		return iterator(*this);
	}

	iterator end() const
	{
		return iterator();
	}
};

template<class T> Stack<T>::~Stack()
{
	while( head_)
	{
		if( head_->isBelongToContainer)
			delete pop();
		else
			pop();
	}
}

template<class T> T* Stack<T>::pop()
{
	if( head_ == 0)
		return 0;

	T* result = head_->data;
	Link* oldHead = head_;
	head_ = head_->next;
	delete oldHead;
	return result;
}

#endif // TSTACK_H
