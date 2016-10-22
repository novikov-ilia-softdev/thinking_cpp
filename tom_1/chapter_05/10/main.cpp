#include "stash.h"
#include <iostream>

class Hen{
public:
	Hen( int i) { _i = i; }
	void print() { std::cout << "Hen::print, i: " << _i << std::endl; }
	void display() { std::cout << "Hen::display" << std::endl; };
	class Egg{
	public:
		void display() { std::cout << "Hen::Egg::display" << std::endl; };
		class Nest{
		public:
			void display() { std::cout << "Hen::Egg::Nest::display" << std::endl; };
		};
	};

private:
	int _i;
};

int main()
{
	Stash stash;
	stash.initialize( sizeof( Hen));
	for( int i = 0; i < 25; i++)
	{
		Hen* hen = new Hen( i);
		stash.add( hen);
		delete hen;
	}

	std::cout << "stash:" << std::endl;
	for( int i = 0; i < 25; i++)
	{
		void* vPtr = stash.fetch( i);
		Hen* hPtr = static_cast<Hen*>( vPtr);
		hPtr->print();

	}

	std::cout << std::endl;
}
