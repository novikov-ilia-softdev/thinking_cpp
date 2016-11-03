#include "stringstack.h"
#include <cstring>

StringStack::StringStack(): _index( 0)
{
	memset( _stack, 0, _size * sizeof( std::string*));
}
