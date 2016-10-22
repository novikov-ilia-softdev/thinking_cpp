#ifndef STACK_H
#define STACK_H

#include "stackimp2.h"

class Stack{
public:
	Stack();
	void push( int i);
	int pop();

private:
	StackImp* stackImp;
};

#endif // STACK_H
