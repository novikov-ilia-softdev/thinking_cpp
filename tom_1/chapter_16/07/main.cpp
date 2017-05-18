#include "autocounter.h"
#include <iostream>

class MyClass{
private:
	AutoCounter ac_;

public:
	const std::string& getName() const { ac_.getName(); }
};

int main()
{
	for( int i = 0 ; i < 5; i++)
	{
		MyClass* obj = new MyClass();
		std::cout << obj->getName() << std::endl;
		delete obj;
	}
}
