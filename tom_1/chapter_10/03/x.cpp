#include "x.h"

int X::staticInt_ = 5;

void X::printStaticInt_()
{
	std::cout << "staticInt_ = " << staticInt_ << std::endl;
}
