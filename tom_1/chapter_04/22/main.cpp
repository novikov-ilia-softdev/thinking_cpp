#include "stack.h"
#include "stash.h"
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	Stack stack;
	std::ifstream in( "stack.cpp");
	std::string s;
	std::vector<std::string> strVector;
	std::cout << "source file: " << std::endl;
	int count = 0;
	while( getline( in, s))
	{
		std::cout << count++ << ": " << s << std::endl;
		strVector.push_back( s);
	}
	std::cout << std::endl;


	Stash* stashPtr = 0;
	for( int i = 0; i < strVector.size(); i++)
	{
		if(!(i % 5)){
			if( stashPtr){
				stack.push( stashPtr);
				stashPtr = 0;
			}

			stashPtr = new Stash();
			stashPtr->initialize( sizeof( std::string));
		}
		stashPtr->add( &(strVector[ i]));
	}

	if( stashPtr)
	{
		stack.push( stashPtr);
		stashPtr = 0;
	}

	while( stashPtr = (Stash*)stack.pop())
	{
		std::cout << "stash:" << std::endl;
		for( int i = 0; i < stashPtr->count(); i++)
		{
			void* vPtr = stashPtr->fetch( i);
			std::string* strPtr = static_cast<std::string*>( vPtr);
			std::cout << *strPtr << std::endl;
		}
	}
}
