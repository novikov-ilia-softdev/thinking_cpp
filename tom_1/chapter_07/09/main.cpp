#include "mystring.h"

int main()
{
	MyString s( "My test string");
	s.print( std::cout);
	s.concat( " some additional stuff");
	s.print( std::cout);

	MyString s2;
	s2.concat( "Using default constructor");
	s2.print( std::cout);
}
