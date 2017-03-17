#ifndef INITIALIZER_H
#define INITIALIZER_H

#include "mirror.h"

extern Mirror* mirror_1;
extern Mirror* mirror_2;

class Initializer
{
private:
	static int initCount_;

public:
	Initializer()
	{
		if( initCount_++ == 0)
		{
			mirror_1 = new Mirror();
			mirror_2 = new Mirror( mirror_1);
		}
	};

	~Initializer()
	{
		if( --initCount_ == 0)
		{
			delete mirror_1;
			delete mirror_2;
		}
	};
};

static Initializer init;

#endif // INITIALIZER_H
