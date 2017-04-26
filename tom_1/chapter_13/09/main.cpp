#include <iostream>
#include "counted.h"

int main()
{
	void* ptr = (void*)new Counted;
	delete ptr;
}
