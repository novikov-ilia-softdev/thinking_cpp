#include <iostream>

int recursiveDecrement( int i)
{
	std::cout << "recursiveDecrement: " << i << std::endl;
	i--;
	if( !i)
		return 0;

	recursiveDecrement( i);
}

int main()
{
	recursiveDecrement( 5);
}
