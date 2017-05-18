#include "autocounter.h"
#include <iostream>

int main()
{
	for( int i = 0 ; i < 5; i++)
	{
		AutoCounter* ac = AutoCounter::create();
		delete ac;
	}
}
