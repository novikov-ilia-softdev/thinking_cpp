#include "monitor2.h"
#include <iostream>

Monitor2::Monitor2( Monitor* monitorPtr): monitorPtr_( monitorPtr)
{
	monitorPtr_->incident();
	monitorPtr_->print();
}

Monitor2::~Monitor2()
{
	monitorPtr_->decrement();
	monitorPtr_->print();
}
