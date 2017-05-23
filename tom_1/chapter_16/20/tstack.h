#ifndef TSTACK_H
#define TSTACK_H

#include "object.h"

template<class T>
class TStack: public T, public Object{
public:
	TStack() : head_( 0) {}
	~TStack()
	{
		while( head_)
		{
			std::cout << "cleaning stack " << head_ << std::endl;
			delete pop();
		}
	}

	void push( T* dat)
	{
		head_ = new Link( dat, head_);
	}

	T* pop()
	{
		if( !head_)
			return 0;

		T* result = head_->data;
		Link* oldHead = head_;
		head_ = head_->next;
		delete oldHead;
		return result;
	}

private:
	struct Link{
		T* data;
		Link* next;
		Link( T* dat, Link* nxt): data( dat), next( nxt) {}

	}* head_;

};

#endif //TSTACK_H
