#include <iostream>

int main()
{
	char arr[] = "Test";
	char* ptr = &arr[ 0];
	std::cout << arr << std::endl;
	*(ptr + 1) = 'q';
	std::cout << arr << std::endl;
}
