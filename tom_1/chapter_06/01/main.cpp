#include <iostream>

class Simple{
public:
	Simple() { std::cout << "Simple::Simple()" << std::endl; }
};

int main()
{
	Simple s;
}
