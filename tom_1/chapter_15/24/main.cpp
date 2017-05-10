#include <iostream>

class IPet{
public:
	virtual std::string speak() const { return "Empty"; }
};

class Dog: public IPet{
public:
	std::string speak() const { return "Bark!"; }
};

int main()
{
	Dog ralph;
	IPet* p1 = &ralph;
	IPet& p2 = ralph;
	IPet p3;
	std::cout << p1->speak() << std::endl;
	std::cout << p2.speak() << std::endl;
	std::cout << p3.speak() << std::endl;
}
