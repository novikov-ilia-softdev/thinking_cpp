#ifndef COUNTED_H
#define COUNTED_H

#include <iostream>

class Counted{
public:
	Counted(): id_( count_++)
	{
		std::cout << "cstr, id = " << id_ << std::endl;
	}

	~Counted()
	{
		std::cout << "dstr, id = " << id_ << std::endl;
	}

	friend std::ostream& operator<<( std::ostream& stream, const Counted& i);

private:
	int id_;
	static int count_;
};

std::ostream& operator<<( std::ostream& stream, const Counted& i)
{
	return stream << i.id_;
}

int Counted::count_ = 0;

#endif // COUNTED_H
