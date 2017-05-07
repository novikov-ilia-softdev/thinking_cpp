#include <iostream>
#include <vector>

class Rodent{
public:
	virtual void eat() = 0;
	virtual ~Rodent() {}
};

class Mouse: public Rodent{
public:
	void eat() { std::cout << "Mouse::draw" << std::endl; }
	~Mouse() { std::cout << "~Mouse" << std::endl; }
};

class Herbil: public Rodent{
public:
	void eat() { std::cout << "Herbil::draw" << std::endl; }
	~Herbil() { std::cout << "~Herbil" << std::endl; }
};

class Hamster: public Rodent{
public:
	void eat() { std::cout << "Hamster::draw" << std::endl; }
	~Hamster() { std::cout << "~Hamster" << std::endl; }
};

int main()
{
	std::vector<Rodent*> vector;
	vector.push_back( new Mouse);
	vector.push_back( new Herbil);
	vector.push_back( new Hamster);

	for( int i = 0; i < vector.size(); i++)
	{
		vector[ i]->eat();
		delete vector[ i];
	}

	vector.clear();
}
