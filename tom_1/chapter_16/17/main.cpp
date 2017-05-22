#include "tpstash.h"
#include "tclass.h"
#include <iostream>

void test( float f)
{
	std::cout << "test: " << f << std::endl;
}

int main()
{
	typedef TClass<float> Float;
	typedef PStash<Float> Stash;
	typedef Stash::iterator StashIterator;

	Stash stash;
	for( int i = 0; i < 10; i ++)
		stash.add( new Float( i * 1.01));

	StashIterator it = stash.begin();
	it += 3;
	StashIterator it2 = it + 5;
	for(; it != it2; it++)
	{
		delete it.remove();
	}
	for( it = stash.begin(); it != stash.end(); it++)
	{
		if( *it)
			std::cout << *it << std::endl;
	}

	it = stash.begin() + 1;
	if( *it)
		test( **it);
}
