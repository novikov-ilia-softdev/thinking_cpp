#include <iostream>

class Bird{
public:
	void fly() { std::cout << "Bird::fly" << std::endl; }
};

class Rock{
};

int main()
{
	Rock rock;
	void* vPtr = &rock;
	Bird* bPtr = static_cast<Bird*>(vPtr);
	bPtr->fly();
}
