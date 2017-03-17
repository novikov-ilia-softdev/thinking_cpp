#include "mirror.h"

Mirror& getMirror_1();

Mirror& getMirror_2()
{
	static Mirror mirror_2( getMirror_1());
	return mirror_2;
}
