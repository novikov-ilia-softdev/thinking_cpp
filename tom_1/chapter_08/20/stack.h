#ifndef STACK_H
#define STACK_H

#include "mystring.h"
#include <string>

class Stack{
public:
	Stack();
	Stack( MyString arr[], int length);
	void push( void* dat);
	void* pop();

private:
	struct Link{
		void* data;
		Link* next;
		void initialize( void* dat, Link* nxt);
	}* head;
};

#endif // STACK_H
