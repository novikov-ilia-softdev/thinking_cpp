#include <iostream>

int main()
{
	const int a = 5;
	const int * const ptr = &a;
	std::cout << "a: " << a << std::endl;
	//*ptr = 6;
	//ptr++;
}
