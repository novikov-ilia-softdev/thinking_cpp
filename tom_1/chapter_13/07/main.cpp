#include <iostream>
#include "counted.h"
#include "stack.h"

int main()
{
	Stack countedStack;
	for( int i = 0; i < 5; i++)
	{
		countedStack.push( new Counted());
	}

	while( !countedStack.isEmpty())
	{
		Counted* ptr = ((Counted*)countedStack.pop());
		ptr->f();
		delete ptr;
	}
}
