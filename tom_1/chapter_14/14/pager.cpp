#include "pager.h"

Pager::Pager( const std::string& str): str_( str)
{
	std::cout << "Pager( const std::string& str): " << str << std::endl;
}

Pager::Pager( const Pager& right): str_( right.str_)
{
	std::cout << "Pager( const Pager& right): " << str_ << std::endl;
}

Pager& Pager::operator=( const Pager& right)
{
	std::cout << "Pager::operator=: " << right.str_ << std::endl;
	if( &right != this)
	{
		str_ = right.str_;
	}

	return *this;
}
