#include <iostream>

class Dog{
public:
	Dog( const std::string& name): name_( name) { std::cout << "Creating Dog: " << *this << std::endl; }
	Dog( const Dog* dp, const std::string& msg): name_( dp->name_ + msg) { std::cout << "Copied dog: " << *this << " from " << *dp << std::endl; }
	~Dog() { std::cout << "Deleting Dog: " << *this << std::endl; }
	void rename( const std::string& newName) { name_ = newName; std::cout << "Dog renamed to: " << *this << std::endl; }
	friend std::ostream& operator<<( std::ostream& os, const Dog& d) { return os << "[" << d.name_ << "]"; }

private:
	std::string name_;
};

class DogHouse{
public:
	DogHouse( Dog* dogPtr, const std::string& houseName): dogPtr_( dogPtr), houseName_( houseName) {}
	DogHouse( const DogHouse& dogHouse): dogPtr_( new Dog( dogHouse.dogPtr_, " copy constructed")), houseName_( dogHouse.houseName_ + " copy constructed") {}
	DogHouse& operator=( const DogHouse& dogHouse)
	{
		if( &dogHouse != this)
		{
			dogPtr_ = new Dog( dogHouse.dogPtr_, " assigned");
			houseName_ = dogHouse.houseName_ + " assigned";
		}
		return *this;
	}
	void renameHouse( const std::string& newName) { houseName_ = newName; }
	Dog* getDog() const { return dogPtr_; }
	~DogHouse() { delete dogPtr_; }


private:
	Dog* dogPtr_;
	std::string houseName_;
	friend std::ostream& operator<<( std::ostream& os, const DogHouse& dogHouse) { return os << "[" << dogHouse.houseName_ << "] contains " << *dogHouse.dogPtr_ ; }
};

int main()
{
	DogHouse fidos( new Dog( "Fido"), "FidoHouse");
	std::cout << fidos << std::endl << std::endl;

	DogHouse fidos2 = fidos;
	std::cout << fidos2 << std::endl << std::endl;

	fidos2.getDog()->rename( "Spot");
	fidos2.renameHouse( "SpotHouse");
	std::cout << fidos2 << std::endl << std::endl;

	fidos = fidos2;
	std::cout << fidos << std::endl << std::endl;

	fidos.getDog()->rename( "Max");
	fidos.renameHouse( "MaxHouse");
	std::cout << fidos << std::endl << std::endl;
}
