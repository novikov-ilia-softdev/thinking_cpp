#include <iostream>

#define FLOOR(x,b) ((x)>=(b)?0:1)

int main()
{
	std::cout << "FLOOR(2,1)" << FLOOR(2,1) << std::endl;
	std::cout << "FLOOR(2,2)" << FLOOR(2,2) << std::endl;
	std::cout << "FLOOR(3,1)" << FLOOR(1,2) << std::endl;
}
