#include <iostream>

class PetFood{
public:
	virtual std::string foodType() const = 0;
};

class Pet{
public:
	virtual std::string type() const = 0;
	virtual PetFood* eats()= 0;
};

class Bird : public Pet{
public:
	std::string type() const { return "Bird"; }
	class BirdFood : public PetFood{
	public:
		std::string foodType() const { return "Bird food"; }
	};
	PetFood* eats() { return &bf_; }

private:
	BirdFood bf_;
};

class Cat : public Pet{
public:
	std::string type() const { return "Cat"; }
	class CatFood : public PetFood{
	public:
		std::string foodType() const { return "Birds"; }
	};
	CatFood* eats() { return &cf_; }

private:
	CatFood cf_;
};

int main()
{
	Bird b;
	Cat c;
	Pet* p[] = { &b, &c };
	for( int i = 0; i < sizeof( p) / sizeof( *p); i++)
	{
		std::cout << p[ i]->type() << " eats " << p[ i]->eats()->foodType() << std::endl;
	}

	Cat::CatFood* cf = c.eats();
	std::cout << cf->foodType() << std::endl;
	Bird::BirdFood* bf;
	//bf = b.eats();
	bf = dynamic_cast<Bird::BirdFood*>( b.eats());
	std::cout << bf->foodType() << std::endl;

	Cat::CatFood& cr = *(c.eats());
	std::cout << cf->foodType() << std::endl;
	Bird::BirdFood& br = dynamic_cast<Bird::BirdFood&>( *(b.eats()));
	std::cout << bf->foodType() << std::endl;
}
