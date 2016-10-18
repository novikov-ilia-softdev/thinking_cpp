#include "stack.h"
#include "video.h"
#include <iostream>
#include <boost/lexical_cast.hpp>

int main()
{
	Stack stack;

	for( int i = 0; i < 25; i++)
	{
		Video* videoPtr = new Video();
		std::string title = "title_" + boost::lexical_cast<std::string>( i);
		videoPtr->setTitle( title);
		videoPtr->setYear( 1900 + i);
		videoPtr->setDuration( 50 + i);
		stack.push( videoPtr);
	}

	std::cout << "stack:" << std::endl;
	for( int i = 0; i < 30; i++)
	{
		void* vPtr = stack.pop();
		if( !vPtr){
			std::cout << "empty_stack ";
			continue;
		}

		Video* videoPtr = static_cast<Video*>( vPtr);
		videoPtr->print();
		delete videoPtr;
	}

	std::cout << std::endl;
}
