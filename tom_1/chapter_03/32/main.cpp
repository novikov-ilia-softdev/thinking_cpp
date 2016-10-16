#include <iostream>

int getDoubleReturnIntFunc( double d)
{
	std::cout << "getDoubleReturnIntFunc" << std::endl;
	int i = static_cast<int>(d);
	std::cout << "i = " << i << std::endl;
	return i;
}

int main()
{
	int(*funcPtr)(double) = &getDoubleReturnIntFunc;
	(*funcPtr)( 3.1415);
}
