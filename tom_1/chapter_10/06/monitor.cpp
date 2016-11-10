#include "monitor.h"
#include <iostream>

int Monitor::incidentCount_ = 0;

Monitor::Monitor()
{
	std::cout << "Monitor::Monitor" << std::endl;
}

Monitor::~Monitor()
{
	std::cout << "~Monitor::Monitor" << std::endl;
}

void Monitor::incident()
{
	incidentCount_++;
}

void Monitor::decrement()
{
	incidentCount_--;
}

void Monitor::print()
{
	std::cout << "incidentCount_ = " << incidentCount_ << std::endl;
}
