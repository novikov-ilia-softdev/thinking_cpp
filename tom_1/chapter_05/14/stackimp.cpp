#include "stackimp.h"

StackImp::StackImp()
{
	head = -1;
}

void StackImp::push( int i)
{
	array[ ++head] = i;
}

int StackImp::pop()
{
	return array[ head--];
}
