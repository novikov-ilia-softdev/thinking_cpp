#include <iostream>

struct Person{
	int age;
};

void setPersonAge( Person* personPtr, int age)
{
	personPtr->age = age;
}

int getPersonAge( Person* personPtr)
{
	return personPtr->age;
}

int main()
{
	Person person;
	setPersonAge( &person, 25);
	std::cout << "getPersonAge( &person) == " << getPersonAge( &person) << std::endl;
}
