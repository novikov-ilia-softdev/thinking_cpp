#include <iostream>

//#define TEST
//#undef TEST
// g++ -D TEST main.cpp

int main()
{
#ifdef TEST
	std::cout << "TEST is defined!" << std::endl;
#else
	std::cout << "TEST is not defined!" << std::endl;
#endif
}
