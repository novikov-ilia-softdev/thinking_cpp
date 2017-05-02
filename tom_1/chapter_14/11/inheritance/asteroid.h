#ifndef ASTEROID_H
#define ASTEROID_H

#include <iostream>

class Asteroid{
public:
	Asteroid(): id_( count_++)
	{
		std::cout << "cstr, id = " << id_ << std::endl;
	}

	void f() const
	{
		std::cout << "f, id = " << id_ << std::endl;
	}

	~Asteroid()
	{
		std::cout << "dstr, id = " << id_ << std::endl;
	}

	friend std::ostream& operator<<( std::ostream& stream, const Asteroid& i);

private:
	int id_;
	static int count_;
};

#endif // ASTEROID_H
