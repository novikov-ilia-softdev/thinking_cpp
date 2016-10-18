#include "stack.h"
#include <iostream>

int main()
{
	Stack stack;

	for( int i = 0; i < 25; i++)
	{
		stack.push( new float( i));
	}

	std::cout << "stack:" << std::endl;
	for( int i = 0; i < 30; i++)
	{
		void* vPtr = stack.pop();
		if( !vPtr){
			std::cout << "empty_stack ";
			continue;
		}

		float* fPtr = static_cast<float*>( vPtr);
		std::cout << *fPtr << " ";
		delete fPtr;
	}

	std::cout << std::endl;
}
