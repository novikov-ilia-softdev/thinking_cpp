#ifndef PAGER_H
#define PAGER_H

#include <iostream>

class Pager{
public:
	Pager( const std::string& str);
	Pager( const Pager&);
	Pager& operator=( const Pager&);

private:
	std::string str_;
};

#endif // PAGER_H
