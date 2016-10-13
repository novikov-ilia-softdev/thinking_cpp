#include <iostream>

#define P(EX) std::cout << #EX << ": " << EX << std::endl
#define TYPE long double

int main()
{
	TYPE a[10];
	for( int i = 0; i < 10; i++)
	{
		a[ i] = i + 10;
	}

	TYPE* iPtr = a;
	P(*iPtr);
	P(*++iPtr);
	P(*(iPtr + 5));

	TYPE* iPtr_2 = iPtr + 5;
	P(*iPtr_2);
	P(*(iPtr_2 - 4));
	P(*--iPtr_2);
	P(iPtr_2 - iPtr);
}
