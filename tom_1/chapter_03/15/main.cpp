#include <iostream>

typedef struct{
	std::string name;
	std::string profession;
	int age;
} Human;

int main()
{
	Human h1;
	h1.name = "Ilya";
	h1.profession = "developer";
	h1.age = 25;

	std::cout << "h1.name == " << h1.name << std::endl;
	std::cout << "h1.profession == " << h1.profession << std::endl;
	std::cout << "h1.age == " << h1.age << std::endl;

	Human* hPtr = &h1;

	hPtr->name = "Alex";
	hPtr->profession = "lazyman";
	hPtr->age = 26;

	std::cout << "hPtr->name == " << hPtr->name << std::endl;
	std::cout << "hPtr->profession == " << hPtr->profession << std::endl;
	std::cout << "hPtr->age == " << hPtr->age << std::endl;
}
