#include <iostream>
#include "fibo.h"

int main()
{
	for( int i = 0; i < 10; i++)
	{
		std::cout << fibo<double>( i) << ", sizeof = " << sizeof( fibo<double>( i)) << std::endl;
	}
}
