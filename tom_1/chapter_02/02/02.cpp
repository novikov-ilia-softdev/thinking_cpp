#include <iostream>

int main()
{
	float radius;
	std::cout << "Input radius: ";
	std::cin >> radius;

	const float PI = 3.1415;
	float area = PI * radius * radius;

	std::cout << "Area: " << area << std::endl;
}
