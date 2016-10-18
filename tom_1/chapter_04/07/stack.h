#ifndef STACK_H
#define STACK_H

struct Stack{

	Stack();
	struct Link{
		void* data;
		Link* next;
		void initialize( void* dat, Link* nxt);
	}* head;


	void push( void* dat);
	void* pop();
};

#endif // STACK_H
