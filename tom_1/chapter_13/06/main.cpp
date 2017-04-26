#include <iostream>
#include "counted.h"
#include "pstash.h"

int main()
{
	PStash countedStash;
	for( int i = 0; i < 5; i++)
	{
		countedStash.add( new Counted());
	}

	for( int i = 0; i < countedStash.count(); i++)
	{
		((Counted*)countedStash[ i])->f();
	}

	for( int i = 0; i < countedStash.count(); i++)
	{
		delete (Counted*)countedStash.remove( i);
	}
}
