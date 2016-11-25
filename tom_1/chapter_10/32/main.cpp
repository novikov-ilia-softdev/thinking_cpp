#include "mirror.h"
#include <iostream>

extern util::Mirror mirror_4;
util::Mirror mirror_5( &mirror_4);

int main()
{
	std::cout << mirror_5.test() << std::endl;
}
