#include "stack.h"
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
	Stack stack;

	for( int i = 0; i < 25; i++)
	{
		stack.push( new Hen( i));
	}

	std::cout << "stack:" << std::endl;
	for( int i = 0; i < 30; i++)
	{
		void* vPtr = stack.pop();
		if( !vPtr){
			std::cout << "empty_stack ";
			continue;
		}

		Hen* hPtr = static_cast<Hen*>( vPtr);
		hPtr->print();
		delete hPtr;
	}

	std::cout << std::endl;
}
