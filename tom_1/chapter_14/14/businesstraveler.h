#ifndef BUSINESSTRAVELER_H
#define BUSINESSTRAVELER_H

#include <iostream>
#include "traveler.h"
#include "pager.h"

class BusinessTraveler: public Traveler{
public:
	BusinessTraveler();
	BusinessTraveler( const std::string& str);
	BusinessTraveler( const BusinessTraveler&);
	BusinessTraveler& operator=( const BusinessTraveler&);

private:
	Pager pager_;
};

#endif // BUSINESSTRAVELER_H
