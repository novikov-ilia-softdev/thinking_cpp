#include "stash.h"
#include <cstring>
#include <iostream>

Stash::Stash( int sz): _sizeOfElement( sz), _elementsCount( 0)
{
	_buf = new Mem;
}

Stash::~Stash()
{
	delete _buf;
}

int Stash::add( const void* element)
{
	int requredSize = (_elementsCount + 1) * _sizeOfElement;
	memcpy( _buf->pointer( requredSize) + _elementsCount * _sizeOfElement, element, _sizeOfElement);
	_elementsCount++;
}

void* Stash::fetch( int index)
{
	return ( _buf->pointer() + index * _sizeOfElement);
}

int Stash::count()
{
	return _elementsCount;
}

void Stash::print()
{
	std::cout << "print:" << std::endl;
	for( int i = 0; i < _elementsCount; i++)
	{
		char* cPtr = (char*)(_buf->pointer() + ( i * _sizeOfElement));
		std::cout << *((float*)cPtr) << " ";
	}

	std::cout << std::endl;
}
