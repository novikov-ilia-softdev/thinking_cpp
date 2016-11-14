#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class X{
public:
	X( int i): i_( i) {}
	void print() const { std::cout << "i = " << i_ << std::endl; }

private:
	int i_;
};

#endif // HEADER_H
