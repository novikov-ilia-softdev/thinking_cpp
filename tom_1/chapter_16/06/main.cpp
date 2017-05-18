#include "tset.h"
#include <iostream>
#include <set>

typedef Set<int> setInt;
//typedef std::set<int> setInt;

void printSet( const setInt& set);

int main()
{
	setInt set;
	set.insert( 4);
	set.insert( 8);
	set.insert( 5);
	set.insert( 4);
	set.insert( 5);
	set.insert( 9);

	std::cout << "after insert: ";
	printSet( set);

	set.erase( 8);
	set.erase( 5);

	std::cout << "after erase: ";
	printSet( set);
}

void printSet( const setInt& set)
{
	setInt::iterator it = set.begin();
	while( it != set.end())
	{
		std::cout << *it << " ";
		it++;
	}

	std::cout << std::endl;
}
