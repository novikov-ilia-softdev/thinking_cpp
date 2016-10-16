#include <iostream>

int main()
{
#ifdef DEBUG_ENABLE
std::cout << "DEBUG_ENABLE" << std::endl;
#endif
	std::cout << "Hello!" << std::endl;
}
