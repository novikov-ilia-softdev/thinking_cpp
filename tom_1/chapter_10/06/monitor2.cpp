#include "monitor2.h"
#include <iostream>

Monitor2::Monitor2( Monitor* monitorPtr): monitorPtr_( monitorPtr)
{
	std::cout << "Monitor2::Monitor2" << std::endl;
	monitorPtr_->incident();
	monitorPtr_->print();
}

Monitor2::~Monitor2()
{
	std::cout << "Monitor2::~Monitor2" << std::endl;
	monitorPtr_->decrement();
	monitorPtr_->print();
}
