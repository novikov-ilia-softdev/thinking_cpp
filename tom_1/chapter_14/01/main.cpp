#include <iostream>

class Vehicle{
public:
	Vehicle( int id): id_(id) { std::cout << "Vehicle" << std::endl; }
	void drive() const {  std::cout << "drive: " << id_ << std::endl; }
	void stop() const {  std::cout << "stop: " << id_ << std::endl; }

private:
	int id_;
};

class Car: public Vehicle{
public:
	Car( int id): Vehicle( id) { std::cout << "Car" << std::endl; }
};

int main()
{
	Car car( 5);
	car.drive();
	car.stop();
}
