#ifndef SELFCOUNTER_H
#define SELFCOUNTER_H

#include <iostream>

class SelfCounter{
private:
	static int count_;
	int id_;

public:
	SelfCounter(): id_( count_++)
	{
		std::cout << "created [" << id_ << "]" << std::endl;
	}

	SelfCounter( const SelfCounter& right): id_( right.id_)
	{
		std::cout << "copied [" << id_ << "]" << std::endl;
	}

	SelfCounter& operator=( const SelfCounter& right)
	{
		if( this != &right)
		{
			id_ = right.id_;
		}

		std::cout << "assigned [" << id_ << "]" << std::endl;
		return *this;
	}

	~SelfCounter()
	{
		std::cout << "destroyed [" << id_ << "]" << std::endl;
	}

	friend std::ostream& operator<<( std::ostream& os, const SelfCounter& sc)
	{
		return os << "SelfCounter " << sc.id_;
	}
};

#endif // SELFCOUNTER_H
