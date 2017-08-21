#include <iostream>
#include "counted.h"
#include "pstash.h"
#include <stdexcept>

int main()
{
	PStash countedStash;
	for( int i = 0; i < 5; i++)
	{
		countedStash.add( new Counted());
	}

	for( int i = 0; i < countedStash.count() + 1; i++)
	{
		try
		{
			((Counted*)countedStash[ i])->f();
		}
		catch( const std::out_of_range& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}

	for( int i = 0; i < countedStash.count(); i++)
	{
		delete (Counted*)countedStash.remove( i);
	}
}
