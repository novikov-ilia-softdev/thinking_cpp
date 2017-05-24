#include "tpstash.h"
#include "tclass.h"
#include <iostream>

int main()
{
	typedef TClass<float> Float;
	typedef PStash<Float> Stash;
	typedef Stash::iterator StashIterator;

	Stash stash;
	for( int i = 0; i < 15; i ++)
		stash.add( new Float( i * 1.01));

	StashIterator it = stash.begin();
	it += 5;
	StashIterator it2 = stash.end() - 2;
	for(; it != it2; it++)
	{
		delete it.remove();
	}
	for( it = stash.begin(); it != stash.end(); it++)
	{
		if( *it)
			std::cout << *it << std::endl;
	}
}
