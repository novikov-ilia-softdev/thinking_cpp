#include "mem.h"
#include <iostream>

int main()
{
	Mem mem;
	std::cout << "Mem mem isMoved: " << mem.isMoved() << std::endl;
	mem.pointer( 5);
	std::cout << "mem.pointer( 5) isMoved: " << mem.isMoved() << std::endl;
	mem.pointer( 3);
	std::cout << "mem.pointer( 3) isMoved: " << mem.isMoved() << std::endl;
	mem.pointer( 7);
	std::cout << "mem.pointer( 7) isMoved: " << mem.isMoved() << std::endl;
}
