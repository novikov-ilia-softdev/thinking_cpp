#include "mirror.h"
#include <iostream>

//extern util::Mirror mirror_4;
extern util::Mirror mirror_1;
util::Mirror mirror_5( &mirror_1);

//g++ main.cpp mirror_1.cpp mirror.h
int main()
{
	std::cout << mirror_5.test() << std::endl;
}
