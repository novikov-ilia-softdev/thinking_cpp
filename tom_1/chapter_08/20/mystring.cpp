#include "mystring.h"
#include <iostream>

MyString::MyString( const std::string& str): _str( str)
{

}

void MyString::print() const
{
	std::cout << _str << std::endl;
}
