#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>

class MyString{
private:
	std::string _str;

public:
	MyString( const std::string& str);
	void print() const;
};

#endif // MYSTRING_H
