#ifndef MYSTRING_H
#define MYSTRING_H

#include "mem.h"
#include <cstring>
#include <iostream>

class MyString{
private:
	Mem* _buf;

public:
	MyString();
	MyString( char* str);
	~MyString();
	void concat( char* str);
	void print( std::ostream& os);
};

#endif // MYSTRING_H
