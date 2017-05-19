#ifndef VALUESTACK_H
#define VALUESTACK_H

template<class T, int size = 5>
class Stack{
private:
	T stack_[ size];
	int top_;

public:
	Stack(): top_( 0) {}
	void push( const T& x)
	{
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
};

#endif // VALUESTACK_H
