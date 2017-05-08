#include <iostream>
#include <vector>

class IPlant{
public:
	virtual void water() = 0;
	virtual ~IPlant() = 0;
};

IPlant::~IPlant() { std::cout << "~IPlant" << std::endl; }

class PlantOne: public IPlant{
public:
	void water() { std::cout << "PlantOne::water" << std::endl; }
	~PlantOne() { std::cout << "~PlantOne" << std::endl; }
};

class PlantTwo: public IPlant{
public:
	void water() { std::cout << "PlantTwo::water" << std::endl; }
	~PlantTwo() { std::cout << "~PlantTwo" << std::endl; }
};

class PlantThree: public IPlant{
public:
	void water() { std::cout << "PlantThree::water" << std::endl; }
	~PlantThree() { std::cout << "~PlantThree" << std::endl; }
};

class GreenHouse{
public:
	GreenHouse()
	{
		add( new PlantOne);
		add( new PlantTwo);
		add( new PlantThree);
	}

	void water()
	{
		std::cout << "GreenHouse::water" << std::endl;
		for( int i = 0; i < vector_.size(); i++)
		{
			vector_[ i]->water();
		}
	}

	~GreenHouse()
	{
		std::cout << "~GreenHouse" << std::endl;
		for( int i = 0; i < vector_.size(); i++)
		{
			delete vector_[ i];
		}
		vector_.clear();
	}

private:
	void add( IPlant* ptr) { vector_.push_back( ptr); }

private:
	std::vector<IPlant*> vector_;
};

int main()
{
	GreenHouse tower;
	tower.water();
}
