#include <iostream>

static int fs;
void func();

int main()
{
	fs = 1;
	std::cout << "fs = " << fs << std::endl;
	func();
	std::cout << "fs = " << fs << std::endl;
}
