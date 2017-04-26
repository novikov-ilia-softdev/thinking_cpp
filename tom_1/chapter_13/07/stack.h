#ifndef STACK_H
#define STACK_H

class Stack{
public:
	Stack() : head_( 0) {}
	~Stack()
	{
		std::cout << "~Stack" << std::endl;
		while( !isEmpty())
		{
			std::cout << "!isEmpty" << std::endl;
			Link* oldHead = head_;
			head_ = head_->next;
			delete oldHead;
		}
	}

	void push( void* dat)
	{
		head_ = new Link( dat, head_);
	}

	bool isEmpty() const
	{
		return (head_ == 0);
	}

	void* pop()
	{
		if( head_ == 0)
			return 0;

		void* result = head_->data;
		Link* oldHead = head_;
		head_ = head_->next;
		delete oldHead;
		return result;
	}

private:
	struct Link{
		void* data;
		Link* next;
		Link( void* dat, Link* nxt): data( dat), next( nxt) {}

	} *head_;
};

#endif // STACK_H
