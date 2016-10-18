#include "stash.h"
#include <iostream>

int main()
{
	Stash stash;
	stash.initialize( sizeof( double));
	for( int i = 0; i < 25; i++)
	{
		float f = static_cast<float>( i);
		stash.add( &f);
	}

	std::cout << "stash:" << std::endl;
	for( int i = 0; i < 25; i++)
	{
		void* vPtr = stash.fetch( i);
		float* fPtr = static_cast<float*>( vPtr);
		std::cout << *fPtr << " ";
	}

	std::cout << std::endl;
}
