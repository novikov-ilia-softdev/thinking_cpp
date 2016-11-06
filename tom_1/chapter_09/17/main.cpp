#include <iostream>

#define TRACE(s) std::cerr << #s << std::endl, s;

int main( )
{
	int count = 0;
	for( int i = 0; i < 10; i++)
		TRACE( count++);

	std::cout << "count == " <<  count << std::endl;
}
