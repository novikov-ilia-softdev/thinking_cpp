#include <iostream>
#include <vector>

class Rodent{
public:
	virtual void eat() = 0;
	virtual ~Rodent() { std::cout << "~Rodent" << std::endl; }
};

class Mouse: public Rodent{
public:
	void eat() { std::cout << "Mouse::eat" << std::endl; }
	~Mouse() { std::cout << "~Mouse" << std::endl; }
};

class Herbil: public Rodent{
public:
	void eat() { std::cout << "Herbil::eat" << std::endl; }
	~Herbil() { std::cout << "~Herbil" << std::endl; }
};

class Hamster: public Rodent{
public:
	void eat() { std::cout << "Hamster::eat" << std::endl; }
	~Hamster() { std::cout << "~Hamster" << std::endl; }
};

class BlueHamster: public Hamster{
public:
	void eat() { std::cout << "BlueHamster::eat" << std::endl; }
	~BlueHamster() { std::cout << "~BlueHamster" << std::endl; }
};

int main()
{
	std::vector<Rodent*> vector;
	vector.push_back( new Mouse);
	vector.push_back( new Herbil);
	vector.push_back( new Hamster);
	vector.push_back( new BlueHamster);

	for( int i = 0; i < vector.size(); i++)
	{
		vector[ i]->eat();
		delete vector[ i];
	}

	vector.clear();
}
