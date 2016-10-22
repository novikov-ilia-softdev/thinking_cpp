#ifndef STACKIMP_H
#define STACKIMP_H

#include <vector>

struct StackImp{
public:
	StackImp();
	void push( int i);
	int pop();

private:
	std::vector<int> array;
	int head;
};

#endif // STACKIMP_H
