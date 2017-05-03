#include <iostream>
#include "businesstraveler.h"

// g++ main.cpp pager.cpp traveler.cpp businesstraveler.cpp

int main()
{
	BusinessTraveler bt1;
	std::cout << std::endl;
	BusinessTraveler bt2( "bt2");
	std::cout << std::endl;
	BusinessTraveler bt3( bt1);
	std::cout << std::endl;
	bt2 = bt3;
}
