#ifndef TCLASS_H
#define TCLASS_H

#include <iostream>

template<class T>
class TClass{
private:
	T t_;

public:
	TClass( T t = 0): t_( t)
	{
		//std::cout << "cstr Int: " << i_ << std::endl;
	}
	~TClass()
	{
		//std::cout << "dstr Int: " << i_ << std::endl;
	}
	operator T() const { return t_; }
	friend std::ostream& operator<<( std::ostream& os, const TClass& x)
	{
		return os << "TClass: " << x.t_;
	}
	friend std::ostream& operator<<( std::ostream& os, const TClass* x)
	{
		return os << "TClass: " << x->t_;
	}
};

#endif // TCLASS_H
