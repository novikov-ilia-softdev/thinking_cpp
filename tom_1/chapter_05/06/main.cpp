#include <iostream>

class Hen{
public:
	void display();
	class Egg{
	public:
		void display();
		class Nest{
		public:
			void display();
		};
	};
};

void Hen::display()
{
	std::cout << "Hen::display" << std::endl;
}

void Hen::Egg::display()
{
	std::cout << "Hen::Egg::display" << std::endl;
}

void Hen::Egg::Nest::display()
{
	std::cout << "Hen::Egg::Nest::display" << std::endl;
}

int main(){
	Hen hen;
	Hen::Egg egg;
	Hen::Egg::Nest nest;

	hen.display();
	egg.display();
	nest.display();
}
