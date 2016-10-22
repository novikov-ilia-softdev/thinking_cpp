#include "stack.h"

Stack::Stack()
{
	stackImp = new StackImp();
}

void Stack::push( int i)
{
	stackImp->push( i);
}

int Stack::pop()
{
	return stackImp->pop();
}
