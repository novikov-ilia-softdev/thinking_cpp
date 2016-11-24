#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <string>

namespace MyNamespace{

class MyClass{
public:
	MyClass( const std::string& str): str_( str) {}
	void print() const { std::cout << str_; }

private:
	std::string str_;
};

};

#endif // MYCLASS_H
