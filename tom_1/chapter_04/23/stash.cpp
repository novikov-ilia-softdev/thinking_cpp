#include "stash.h"
#include <iostream>
#include <cassert>

static int printCount = 0;

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
	if( index >= storage.size())
		return 0;

	//std::cout << *(std::string*)&storage[index * size] << std::endl;

	return &storage[index * size];
}

int Stash::count()
{
	return storage.size() / size;
}

void Stash::print()
{
	std::cout << printCount++ << " Stash::print" << std::endl;
	for( int i = 0; i < storage.size(); i += size)
	{
		std::cout << *((std::string*)&storage[ i]) << std::endl;
	}
	std::cout << std:: endl;
}
