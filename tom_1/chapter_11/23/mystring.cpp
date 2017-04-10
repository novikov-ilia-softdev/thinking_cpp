#include "mystring.h"

MyString::MyString(): _buf( 0)
{

}

MyString::MyString( char* str)
{
	_buf = new Mem( strlen( str) + 1);
	strcpy( (char*)_buf->pointer(), str);
}

MyString::MyString( const MyString& str)
{
	_buf = new Mem( strlen( (char*)(str._buf->pointer())) + 1);
	strcpy( (char*)_buf->pointer(), (char*)str._buf->pointer());
}

MyString::~MyString()
{
	delete _buf;
}

void MyString::concat( char* str)
{
	if( !_buf)
		_buf = new Mem;

	strcat( (char*)_buf->pointer( _buf->msize() + strlen( str) + 1), str);
}

void MyString::print( std::ostream& os)
{
	if( !_buf)
		return;

	os << static_cast<void*>( _buf->pointer()) << ": " << _buf->pointer() << std::endl;
}
