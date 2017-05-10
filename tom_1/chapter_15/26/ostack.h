#ifndef OSTACK_H
#define OSTACK_H

class Object{
public:
	virtual ~Object() = 0;
};

inline Object::~Object() {}

class Stack{
public:
	Stack() : head_( 0) {}
	~Stack()
	{
		while( head_)
		{
			delete pop();
		}
	}

	void push( Object* dat)
	{
		head_ = new Link( dat, head_);
	}

	Object* pop()
	{
		if( !head_)
			return 0;

		Object* result = head_->data;
		Link* oldHead = head_;
		head_ = head_->next;
		delete oldHead;
		return result;
	}

private:
	struct Link{
		Object* data;
		Link* next;
		Link( Object* dat, Link* nxt): data( dat), next( nxt) {}

	}* head_;

};

#endif //OSTACK_H
