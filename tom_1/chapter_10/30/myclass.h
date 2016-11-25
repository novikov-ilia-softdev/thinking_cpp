#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

namespace MyNamespace{

class MyClass{
public:
	MyClass( int i = 0): i_( i) {}
	void print() const { std::cout << "i: " << i_ << std::endl; }

private:
	int i_;
};

};

#endif // MYCLASS_H
