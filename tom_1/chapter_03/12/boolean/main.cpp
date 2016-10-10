#include <iostream>

int main()
{
	float i, j;
	std::cout << "Input i: ";
	std::cin >> i;
	std::cout << "Input j: ";
	std::cin >> j;
	std::cout << "i > j is " << (i > j) << std::endl;
	std::cout << "i < j is " << (i < j) << std::endl;
	std::cout << "i >= j is " << (i >= j) << std::endl;
	std::cout << "i <= j is " << (i <= j) << std::endl;
	std::cout << "i == j is " << (i == j) << std::endl;
	std::cout << "i != j is " << (i not_eq j) << std::endl;
	std::cout << "i && j is " << (i and j) << std::endl;
	std::cout << "i || j is " << (i or j) << std::endl;
	std::cout << "(i < 10) && (j < 10) is " << ((i < 10) and (j < 10)) << std::endl;
}
