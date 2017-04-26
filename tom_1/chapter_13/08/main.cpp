#include <iostream>
#include "counted.h"

int main()
{
	std::cout << "new Counted[]" << std::endl;
	Counted* arr = new Counted[ 10];
	std::cout << "delete Counted" << std::endl;
	delete arr;
}
