#include <iostream>

struct Stash{
	void hello();
};

void Stash::hello()
{
	std::cout << "hello!" << std::endl;
}

int main()
{
	Stash stash;
	stash.hello();
}
