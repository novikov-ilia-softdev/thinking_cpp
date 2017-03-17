#include <iostream>
#include "mirror.h"

Mirror& getMirror_2();

int main()
{
	std::cout << getMirror_2().test() << std::endl;
}
