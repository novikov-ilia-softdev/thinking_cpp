#include "monitor.h"
#include <iostream>

int Monitor::incidentCount_ = 0;

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
