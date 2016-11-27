#include "mirror.h"
#include <iostream>

//extern util::Mirror mirror_4;
extern util::Mirror mirror_1;
util::Mirror mirror_5( &mirror_1);
//util::Mirror mirror_5( 0);

//g++ main.cpp mirror_1.cpp mirror.h

//g++ -c main.cpp
//g++ -c mirror_1.cpp
// g++ main.o mirror_1.o
int main()
{
	std::cout << mirror_5.test() << std::endl;
}
