#include <iostream>

class Person{
public:
	int age;
	void setAge( int age);
	int getAge();
};

void Person::setAge( int age)
{
	this->age = age;
}

int Person::getAge()
{
	return this->age;
}

int main()
{
	Person person;
	person.setAge( 25);
	std::cout << "person.getAge() == " << person.getAge() << std::endl;
}
