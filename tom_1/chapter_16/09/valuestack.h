#ifndef VALUESTACK_H
#define VALUESTACK_H

#include <iostream>
#include <cstring>

template<class T, int size = 5>
class Stack{
private:
	T* stack_;
	int top_;
	int size_;
	void expand_()
	{
		std::cout << "expand " << std::endl;
		const int newSize = size_ * 2;
		T* st = new T [ newSize];
		memset( st, 0, sizeof( T) * newSize);
		memcpy( st, stack_, sizeof( T) * size_);
		size_ = newSize;
		delete [] stack_;
		stack_ = st;
	}

public:
	Stack(): top_( 0), size_( size)
	{
		stack_ =  new T[ size_];
	}
	void push( const T& x)
	{
		if( top_ + 1 == size_)
			expand_();

		stack_[ ++top_] = x;
	}
	T peek() const
	{
		return stack_[ top_];
	}
	T pop()
	{
		return stack_[ top_--];
	}
	~Stack()
	{
		delete [] stack_;
	}
};

#endif // VALUESTACK_H
