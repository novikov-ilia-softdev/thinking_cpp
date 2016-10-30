#include "quoter.h"
#include <iostream>

int main()
{
	Quoter q;
	const Quoter cq;
	cq.getLastQuote();
	cq.quote();
	for( int i = 0; i < 20; i++)
	{
		std::cout << q.quote() << std::endl;
	}
}
