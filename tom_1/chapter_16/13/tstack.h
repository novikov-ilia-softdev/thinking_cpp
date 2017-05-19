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
		return container_.top();
	}

	T* pop()
	{
		T* t = container_.top();
		container_.pop();
		return t;
	}
};

template<class T> Stack<T>::~Stack()
{
	while( !container_.empty())
	{
		delete pop();
	}
}

#endif // TSTACK_H
