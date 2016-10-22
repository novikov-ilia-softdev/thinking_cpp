#include <iostream>

class Hen{
public:
	void display();

	class Egg{
	public:
		void display();
		friend class Hen;

		class Nest{
		public:
			void display();
			friend class Egg;

		private:
			int nestVal;
		} nest; // Nest

	private:
		int eggVal;
	} egg;	// Egg

};

void Hen::display()
{
	std::cout << "Hen::display" << std::endl;
	std::cout << "egg.eggVal: " << egg.eggVal << std::endl;
}

void Hen::Egg::display()
{
	std::cout << "Hen::Egg::display" << std::endl;
	std::cout << "nest.nestVal: " << nest.nestVal << std::endl;
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
