#include "mirror.h"

Mirror& getMirror_1()
{
	static Mirror mirror_1;
	return mirror_1;
}
