#include "mystring.h"

int main()
{
	MyString s( "My test string");
	s.print( std::cout);

	MyString s1( s);
	s1.print( std::cout);
}
