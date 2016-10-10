#include <iostream>

int main()
{
	int x = 1, y = 2, z = 3;
	std::cout << "x + y - 2/2 + z == " << x + y - 2/2 + z  << std::endl;
	std::cout << "x + (y - 2)/(2 + z) == " << x + (y - 2)/(2 + z)  << std::endl;
}
