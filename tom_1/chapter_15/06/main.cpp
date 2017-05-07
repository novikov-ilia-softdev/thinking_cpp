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
	const int size = 3;
	Rodent* rodents[ size];
	rodents[ 0] = new Mouse();
	rodents[ 1] = new Herbil();
	rodents[ 2] = new Hamster();

	for( int i = 0; i < size; i++)
	{
		rodents[ i]->eat();
		delete rodents[ i];
	}

	/*
	std::vector<Shape*> vector;
	vector.push_back( new Circle);
	vector.push_back( new Square);
	vector.push_back( new Triangle);

	for( int i = 0; i < vector.size(); i++)
	{
		vector[ i]->draw();
	}
	*/
}
