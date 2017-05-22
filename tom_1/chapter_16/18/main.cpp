#include "tarray.h"
#include <iostream>
#include <sstream>

int main()
{
	std::stringstream input( "47 34 56 92 103");
	TArray<int> arr;
	input >> arr;
	arr[ 3] = -1;
	std::cout << arr << std::endl;
}
