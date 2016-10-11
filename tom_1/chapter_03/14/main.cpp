#include <iostream>

int main()
{
	std::cout << "Input number: ";
	int a;
	std::cin >> a;
	a < 5 ? std::cout << "a < 5" << std::endl : std::cout << "a >= 5" << std::endl;
}
