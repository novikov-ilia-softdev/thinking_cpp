#ifndef STACK_H
#define STACK_H

class Stack{
public:
	Stack();
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
