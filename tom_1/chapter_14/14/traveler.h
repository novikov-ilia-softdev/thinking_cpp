#ifndef TRAVELER_H
#define TRAVELER_H

#include <iostream>

class Traveler{
public:
	Traveler( const std::string& str);
	Traveler( const Traveler&);
	Traveler& operator=( const Traveler&);

private:
	std::string str_;
};

#endif // TRAVELER_H
