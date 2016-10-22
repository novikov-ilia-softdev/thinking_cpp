#include "stackimp2.h"

StackImp::StackImp()
{
	head = -1;
}

void StackImp::push( int i)
{
	array.push_back( i);
	head++;
}

int StackImp::pop()
{
	return array[ head--];
}
