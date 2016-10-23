#include "handle.h"
#include <iostream>

int main()
{
	Handle h;
	std::cout << "h.read(): " << h.read() << std::endl;
	h.change( 1);
	std::cout << "h.read(): " << h.read() << std::endl;
}
