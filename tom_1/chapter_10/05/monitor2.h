#ifndef MONITOR2_H
#define MONITOR2_H

#include "monitor.h"

class Monitor2{
public:
	Monitor2( Monitor* monitorPtr);
	~Monitor2();

private:
	Monitor* monitorPtr_;
};

#endif // MONITOR2_H
