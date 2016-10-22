#include "handle.h"
#include <iostream>

int main()
{
	// g++ -c main.cpp
	// g++ -c handle.cpp
	// g++ main.o handle.o
	Handle h;
	h.initialize();
	std::cout << "h.read(): " << h.read() << std::endl;
	h.change( 1);
	std::cout << "h.read(): " << h.read() << std::endl;
	h.cleanup();
}
