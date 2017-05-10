#include <iostream>
#include <fstream>
#include <vector>
#include "ostack.h"

class MyString: public std::string, public Object{
public:
	MyString( const std::string& str): std::string( str) {}
	~MyString()
	{
		std::cout << "deleting string: " << *this << std::endl;
	}
};

class MyClass: public std::vector<int>, public Object{
public:
	MyClass() {}
	~MyClass()
	{
		std::cout << "deleting MyClass: " << this << std::endl;
	}
};

int main()
{
	/*
	std::ifstream in( "main.cpp");
	Stack textLines;
	std::string line;
	while( getline( in, line))
	{
		textLines.push( new MyString( line));
	}

	MyString* s;
	for( int i = 0; i < 10; i++)
	{
		if( (s = (MyString*)textLines.pop()) == 0) break;
		std::cout << *s << std::endl;
		delete s;
	}

	std::cout << "Letting destructor do the rest: " << std::endl;
	*/

	Stack textLines;
	for( int i = 0 ; i < 5; i++)
	{
		textLines.push( new MyClass());
	}

	MyClass* p;

	for( int i = 0; i < 3; i++)
	{
		if( (p = (MyClass*)textLines.pop()) == 0) break;
		std::cout << p << std::endl;
		delete p;
	}

	std::cout << "Letting destructor do the rest: " << std::endl;

}
