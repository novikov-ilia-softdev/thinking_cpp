#include "holder.h"
#include <cstring>

Holder::Holder()
{
	memset( _a, 0, _size * sizeof( int));
}
