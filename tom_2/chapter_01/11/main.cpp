#include <iostream>

class Garage{
public:
	Garage()
		try
		{
			std::cout << "Garage::Garage" << std::endl;
		}
		catch( int ex)
		{
			std::cout << "exception: " << ex << std::endl;
			throw 'a';
		}
	class Car{
	public:
		Car()
		{
			std::cout << "Car::Car" << std::endl;
		}
		class Motor{
		public:
			Motor()
			{
				std::cout << "Motor::Motor" << std::endl;
				throw 5;
			}
		};
	private:
		Motor motor_;
	};

private:
	Car car_;
};

int main()
{
	try
	{
		Garage garage;
	}
	catch( char ex)
	{
		std::cout << "exception: " << ex << std::endl;
	}

}
