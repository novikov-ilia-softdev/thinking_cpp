#include "asteroid.h"

int Asteroid::count_ = 0;

std::ostream& operator<<( std::ostream& stream, const Asteroid& i)
{
	return stream << i.id_;
}
