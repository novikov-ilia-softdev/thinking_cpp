#ifndef STACKIMP_H
#define STACKIMP_H

struct StackImp{
public:
	StackImp();
	void push( int i);
	int pop();

private:
	int array[ 100];
	int head;
};

#endif // STACKIMP_H
