#include <iostream>

int fibo( bool reset = false)
{
	static int prev = 1;
	static int prevPrev = 0;
	static int count = 0;

	if( reset)
	{
		prev = 1;
		prevPrev = 0;
		count = 0;
	}

	if( count == 0)
	{
		count++;
		return 0;
	}

	if( count == 1)
	{
		count++;
		return 1;
	}

	int next = prev + prevPrev;
	prevPrev = prev;
	prev = next;

	return next;
}

int main()
{
	std::cout << "fibo:" <<std::endl;
	for( int i = 0; i < 10; i++)
	{
		std::cout << fibo() << " ";
	}
	std::cout << std::endl;

	std::cout << "fibo:" <<std::endl;
	for( int i = 0; i < 10; i++)
	{
		!i ? std::cout << fibo( true) << " " : std::cout << fibo() << " ";


	}
	std::cout << std::endl;
}
