#include "stackwrapper.h"
#include <string>
#include <iostream>

static int pushCount = 0;
static int popCount = 0;

StackWrapper::StackWrapper()
{
	stashIndex = 0;
	criticalStashSize = 5;
	stashPtr = NULL;
}

void StackWrapper::push( void* dat)
{
	//std::cout <<  pushCount++ << ": StackWrapper::push" << std::endl;

	if( !stashPtr)
	{
		//std::cout << "new Stash()" << std::endl;
		stashPtr = new Stash();
		stashPtr->initialize( sizeof( std::string));
	}

	if( stashPtr->count() < criticalStashSize)
	{
		//std::cout << "stashPtr->add" << std::endl;
		stashPtr->add( dat);
	}

	if( stashPtr->count() == criticalStashSize)
	{
		//std::cout << "stack.push" << std::endl;
		stack.push( stashPtr);
		stashPtr = NULL;
	}
}

void* StackWrapper::pop()
{
	//std::cout <<  popCount++ << ": StackWrapper::pop" << std::endl;

	void *res = NULL;
	if( !stashPtr)
	{
		//std::cout << "stack.pop" << std::endl;
		stashPtr = (Stash*)stack.pop();
		if( !stashPtr)
			return NULL;
	}

	if( stashIndex < criticalStashSize || stashIndex < stashPtr->count())
		{
			//std::cout << "stashPtr->fetch" << std::endl;
			res = stashPtr->fetch( stashIndex);
			stashIndex++;
			if( stashIndex == criticalStashSize || stashIndex == stashPtr->count())
			{
				delete stashPtr;
				stashPtr = NULL;
				stashIndex = 0;
			}
		}

	return res;
}
