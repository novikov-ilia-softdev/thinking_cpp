#include "cpptime.h"
#include <iostream>

int main()
{
	Time start;
	std::string line;
	std::getline(std::cin, line);
	Time end;
	std::cout << "Enter pressed!" << std::endl;
	std::cout << "delta: " << end.delta( &start) << std::endl;
}
