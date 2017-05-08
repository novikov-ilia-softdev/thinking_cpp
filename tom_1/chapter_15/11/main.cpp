#include <iostream>
#include <vector>

class IAircraft{
public:
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual ~IAircraft() = 0;
};

IAircraft::~IAircraft() { std::cout << "~IAircraft" << std::endl; }

class AircraftOne: public IAircraft{
public:
	void start() { std::cout << "AircraftOne::start" << std::endl; }
	void stop() { std::cout << "AircraftOne::stop" << std::endl; }
	~AircraftOne() { std::cout << "~AircraftOne" << std::endl; }
};

class AircraftTwo: public IAircraft{
public:
	void start() { std::cout << "AircraftTwo::start" << std::endl; }
	void stop() { std::cout << "AircraftTwo::stop" << std::endl; }
	~AircraftTwo() { std::cout << "~AircraftTwo" << std::endl; }
};

class AircraftThree: public IAircraft{
public:
	void start() { std::cout << "AircraftThree::start" << std::endl; }
	void stop() { std::cout << "AircraftThree::stop" << std::endl; }
	~AircraftThree() { std::cout << "~AircraftThree" << std::endl; }
};

class Tower{
public:
	void start()
	{
		std::cout << "Tower::start" << std::endl;
		for( int i = 0; i < vector_.size(); i++)
		{
			vector_[ i]->start();
		}
		for( int i = 0; i < vector_.size(); i++)
		{
			vector_[ i]->stop();
		}
	}
	void add( IAircraft* ptr) { vector_.push_back( ptr); }
	~Tower()
	{
		std::cout << "~Tower" << std::endl;
		for( int i = 0; i < vector_.size(); i++)
		{
			delete vector_[ i];
		}
		vector_.clear();
	}

private:
	std::vector<IAircraft*> vector_;
};

int main()
{
	Tower tower;
	tower.add( new AircraftOne);
	tower.add( new AircraftTwo);
	tower.add( new AircraftThree);
	tower.start();
}
