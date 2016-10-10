#include <iostream>

void f1( std::string* str)
{
	*str += "_f1";
}

void f2( std::string& str)
{
	str += "_f2";
}

int main()
{
	std::string str1 = "str1";
	std::cout << "str1 before: " << str1 << std::endl;
	f1( &str1);
	std::cout << "str1 after: " << str1 << std::endl;

	std::string str2 = "str2";
	std::cout << "str2 before: " << str2 << std::endl;
	f2( str2);
	std::cout << "str2 after: " << str2 << std::endl;
}
