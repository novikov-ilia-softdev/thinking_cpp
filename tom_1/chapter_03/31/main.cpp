#include <iostream>

// g++ -D RELEASE main.cpp

#ifdef RELEASE
#define P(A)
#else
#define P(A) std::cout << #A << ": " << (A) << std::endl;
#endif

int main()
{
	int a = 1, b = 2, c = 3;
	P( a); P( b); P( c);
	P( a + b);
	P( ( c - a)/b);
}
