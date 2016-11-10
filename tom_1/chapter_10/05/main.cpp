#include "monitor.h"
#include "monitor2.h"

void f()
{
	static Monitor monitor;
	static Monitor2 monitor2( &monitor);
}

int main()
{
	for( int i = 0; i < 5; i++)
	{
		f();
	}
}
