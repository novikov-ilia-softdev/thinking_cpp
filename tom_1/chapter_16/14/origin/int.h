#ifndef INT_H
#define INT_H

#include <iostream>

class Int{
private:
	int i_;

public:
	Int( int i = 0): i_( i)
	{
		//std::cout << "cstr Int: " << i_ << std::endl;
	}
	~Int()
	{
		//std::cout << "dstr Int: " << i_ << std::endl;
	}
	operator int() const { return i_; }
	friend std::ostream& operator<<( std::ostream& os, const Int& x)
	{
		return os << "Int: " << x.i_;
	}
	friend std::ostream& operator<<( std::ostream& os, const Int* x)
	{
		return os << "Int: " << x->i_;
	}
};

#endif // INT_H
