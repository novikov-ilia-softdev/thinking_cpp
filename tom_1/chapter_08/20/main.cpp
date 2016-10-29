#include "stack.h"
#include "mystring.h"
#include <iostream>

int main()
{
	MyString arr[] = {
						MyString( "str_1"),
						MyString( "str_2"),
						MyString( "str_3"),
						MyString( "str_4"),
						MyString( "str_5") };

	Stack stack( arr, sizeof( arr) / sizeof( *arr));

	while( void* vPtr = stack.pop())
	{
		MyString* sPtr = static_cast<MyString*>( vPtr);
		sPtr->print();
	}
}
