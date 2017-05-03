#include "businesstraveler.h"

BusinessTraveler::BusinessTraveler():
			Traveler( "defaultTraveler"), pager_( "defaultPager")
{
	std::cout << "BusinessTraveler()" << std::endl;
}

BusinessTraveler::BusinessTraveler( const std::string& str):
			Traveler( "strTraveler " + str), pager_( "strPager " + str)
{
	std::cout << "BusinessTraveler( const std::string& str)" << std::endl;
}

BusinessTraveler::BusinessTraveler( const BusinessTraveler& right):
			Traveler( right), pager_( right.pager_)
{
	std::cout << "BusinessTraveler( const BusinessTraveler& right)" << std::endl;
}

BusinessTraveler& BusinessTraveler::operator=( const BusinessTraveler& right)
{
	std::cout << "BusinessTraveler::operator=" << std::endl;
	if( &right != this)
	{
		Traveler::operator=( right);
		pager_ = right.pager_;
	}

	return *this;
}
