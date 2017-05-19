#ifndef VALUESTACK_H
#define VALUESTACK_H

#include <iostream>
#include <vector>

template<class T>
class Stack{
private:
	std::vector<T> stack_;

public:
	Stack() {}
	void push( const T& x)
	{
		stack_.push_back( x);
	}
	T peek() const
	{
		return stack_[ stack_.size() - 1];
	}
	T pop()
	{
		T t = stack_[ stack_.size() - 1];
		stack_.erase( stack_.begin() + stack_.size() - 1);
		return t;

	}
};

#endif // VALUESTACK_H
