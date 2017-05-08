#include <iostream>

class IPet{
public:
	virtual std::string speak() const = 0;
	virtual ~IPet() = 0;
};

std::string IPet::speak() const { return ""; }
IPet::~IPet() { }

class Dog: public IPet{
public:
	std::string speak() const { return "Bark!"; }
};

int main()
{
	Dog ralph;
	IPet* p1 = &ralph;
	IPet& p2 = ralph;
	std::cout << p1->speak() << std::endl;
	std::cout << p2.speak() << std::endl;
}
