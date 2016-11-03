#include "holder.h"
#include "pointer.h"
#include <iostream>

int main()
{
	Holder h;
	Pointer hPtr( &h);

	for( int i = 0; i < h.getSize(); i++)
	{
		hPtr.set( i);
		hPtr.next();
	}

	hPtr.top();

	Pointer hPtr2( &h);
	hPtr2.end();

	for( int i = 0; i < h.getSize(); i++)
	{
		std::cout << "hPtr: " << hPtr.read() << std::endl;
		std::cout << "hPtr2: " << hPtr2.read() << std::endl;
		hPtr.next();
		hPtr2.previous();
		std::cout << std::endl;
	}
}
