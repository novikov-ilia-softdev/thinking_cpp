#include <iostream>

class Dog{
public:
	static Dog* make( const std::string& name)
	{
		return new Dog( name);
	}

	Dog( const Dog& dog): name_( dog.name_ + " copy"), refCount_( 1)
	{
		si_++;
		i_ = si_;
		std::cout << "Dog copy-constructor: " << *this << std::endl;
		printDebug();
	}

	~Dog()
	{
		std::cout << "Deleting dog: " << *this << std::endl;
		printDebug();
	}

	void attach()
	{
		++refCount_;
		std::cout << "Attached dog: " << *this << std::endl;
		printDebug();
	}

	void detach()
	{
		if( refCount_ != 0)
		{
			std::cout << "Detaching dog: " << *this << std::endl;
			printDebug();
			if( --refCount_ == 0)
				delete this;
		}
	}

	Dog* unalias()
	{
		if( refCount_ == 1)
			return this;

		--refCount_;
		return new Dog( *this);
	}

	void rename( const std::string& newName)
	{
		name_ = newName;
		std::cout << "Dog renamed to: " << *this << std::endl;
		printDebug();
	}

	friend std::ostream& operator<<( std::ostream& os, const Dog& d)
	{
		return os << "[" << d.name_ << "]";
		d.printDebug();
	}

	void printDebug() const
	{
		std::cout << "i=" << i_ << ", refCount=" << refCount_ << std::endl;
	}

private:
	Dog( const std::string& name): name_( name), refCount_( 1)
	{
		si_++;
		i_ = si_;
		std::cout << "Creating Dog: " << *this << std::endl;
		printDebug();
	}


	Dog& operator=( const Dog& dog);

private:
	std::string name_;
	int refCount_;
	int i_;
	static int si_;
};

int Dog::si_ = 0;

class DogHouse{
public:
	DogHouse( Dog* dogPtr, const std::string& houseName): dogPtr_( dogPtr), name_( houseName)
	{
		si_++;
		i_ = si_;
		std::cout << "Created DogHouse: " << *this << std::endl;
		printDebug();
	}

	DogHouse( const DogHouse& dogHouse): dogPtr_( dogHouse.dogPtr_), name_( "copy-constructed " + dogHouse.name_)
	{
		si_++;
		i_ = si_;
		dogPtr_->attach();
		std::cout << "DogHouse copy-constructor: " << *this << std::endl;
		printDebug();
	}

	DogHouse& operator=( const DogHouse& dogHouse)
	{
		if( &dogHouse != this)
		{
			name_ = dogHouse.name_ + " assigned";
			dogPtr_->detach();
			dogPtr_ = dogHouse.dogPtr_;
			dogPtr_->attach();
		}

		std::cout << "DogHouse operator= : " << *this << std::endl;
		printDebug();
		return *this;
	}

	~DogHouse()
	{
		std::cout << "DogHouse destructor: " << *this << std::endl;
		printDebug();
		dogPtr_->detach();
	}

	void renameHouse( const std::string& newName)
	{
		name_ = newName;
	}

	void unalias()
	{
		dogPtr_ = dogPtr_->unalias();

	}

	Dog* getDog()
	{
		unalias();
		return dogPtr_;
	}

	friend std::ostream& operator<<( std::ostream& os, const DogHouse& dogHouse)
	{
		return os << "[" << dogHouse.name_ << "] contains " << *dogHouse.dogPtr_ ;
	}

	void printDebug() const
	{
		std::cout << "i=" << i_ << std::endl;
	}

private:
	Dog* dogPtr_;
	std::string name_;
	int i_;
	static int si_;
};

int DogHouse::si_ = 0;

int main()
{
	DogHouse fidos( Dog::make( "Fido"), "FidosHouse");
	DogHouse spots( Dog::make( "Spot"), "SpotHouse");
	std::cout << std::endl;

	std::cout << "Entering copy-construction" << std::endl;
	DogHouse bobs( fidos);
	std::cout << "After copy-construction bobs" << std::endl;
	std::cout << "fidos: " << fidos << std::endl;
	std::cout << "spots: " << spots << std::endl;
	std::cout << "bobs: " << bobs << std::endl << std::endl;

	std::cout << "Entering spots = fidos" << std::endl;
	spots = fidos;
	std::cout << "After spots = fidos" << std::endl;
	std::cout << "spots: " << spots << std::endl << std::endl;

	std::cout << "Entering self assignment" << std::endl;
	bobs = bobs;
	std::cout << "After self assignment" << std::endl;
	std::cout << "bobs: " << bobs << std::endl << std::endl;

	std::cout << "Entering rename Bob" << std::endl;
	bobs.getDog()->rename( "Bob");
	std::cout << "After rename Bob" << std::endl;

	std::cout << std::endl;
}
