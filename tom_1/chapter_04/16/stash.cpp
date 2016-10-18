#include "stash.h"
#include <iostream>
#include <cassert>


void Stash::initialize( int sz)
{
	size = sz;
}

void Stash::cleanup()
{
	if( !storage.empty())
	{
		std::cout << "freeing storage" << std::endl;
		storage.clear();
	}
}

int Stash::add( const void* element)
{
	unsigned char* e = (unsigned char*)element;
	for( int i = 0; i < size; i++)
	{
		storage.push_back( e[i]);
	}

	return storage.size() - 1;
}

void* Stash::fetch( int index)
{
	assert( index >= 0);
	if( index >= next)
		return 0;

	return &storage[index * size];
}

int Stash::count()
{
	return storage.size();
}
