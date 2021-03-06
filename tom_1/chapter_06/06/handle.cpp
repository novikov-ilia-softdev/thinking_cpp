#include "handle.h"

struct Handle::Cheshire{
	int i;
	int c;
};

Handle::Handle()
{
	initialize();
}

Handle::~Handle()
{
	cleanup();
}

void Handle::initialize()
{
	smile = new Cheshire;
	smile->i = 0;
}

void Handle::cleanup()
{
	delete smile;
}

int Handle::read()
{
	return smile->i;
}

void Handle::change( int x)
{
	smile->i = x;
}
