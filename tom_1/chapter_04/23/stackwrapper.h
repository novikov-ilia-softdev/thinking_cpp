#ifndef STACKWRAPPER_H
#define STACKWRAPPER_H

#include "stack.h"
#include "stash.h"

struct StackWrapper{

	StackWrapper();

	Stack stack;
	Stash* stashPtr;
	int stashIndex;
	int criticalStashSize;

	void push( void* dat);
	void* pop();
};

#endif // STACKWRAPPER_H
