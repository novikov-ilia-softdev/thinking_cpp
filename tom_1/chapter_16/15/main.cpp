#include "iterintstack.h"
#include "fibo.h"
#include <iostream>

int main()
{
	IntStack is;
	for( int i = 0; i < 10; i++)
		is.push( fibo<int>( i));

	IntStack::iterator it = is.begin();
	for(; it != is.end(); it++)
		std::cout << *it << std::endl;
}
