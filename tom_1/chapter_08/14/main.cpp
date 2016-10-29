#include <iostream>

void f( float n)
{
	const float& link = n;
	std::cout << "n: " << n << ", link: " << link << std::endl;
	n++;
	//link++;
	std::cout << "n: " << n << ", link: " << link << std::endl;
}

int main()
{
	f( 5);
}
