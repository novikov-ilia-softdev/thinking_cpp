#include "stack.h"
#include <iostream>

Stack::Stack()
{
	head = 0;
}

Stack::Stack( MyString arr[], int length)
{
	head = 0;
	for( int i = 0; i < length; i++)
	{
		push( static_cast<void*>(arr + i));
	}
}

void Stack::Link::initialize( void* dat, Link* nxt)
{
	data = dat;
	next = nxt;
}

void Stack::push( void* dat)
{
	Link* newLink = new Link();
	newLink->initialize(dat, head);
	head = newLink;
}

void* Stack::pop()
{
	if( !head)
		return 0;

	void* result = head->data;
	Link* oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}
