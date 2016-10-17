#include <iostream>

struct Person{
	int age;
	void setAge( Person* personPtr, int age);
	int getAge( Person* personPtr);
};

void Person::setAge( Person* personPtr, int age)
{
	personPtr->age = age;
}

int Person::getAge( Person* personPtr)
{
	return personPtr->age;
}

int main()
{
	Person person;
	person.setAge( &person, 25);
	std::cout << "person.getAge( &person) == " << person.getAge( &person) << std::endl;
}
