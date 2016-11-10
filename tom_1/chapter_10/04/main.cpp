#include "monitor.h"

void f()
{
	static Monitor monitor;
	monitor.incident();
	monitor.print();
}

int main()
{
	for( int i = 0; i < 5; i++)
	{
		f();
	}
}
