#include <iostream>

class MyClass{
public:
	MyClass(): id_( count_++)
	{
		std::cout << "cstr, id = " << id_ << std::endl;
	}

	~MyClass()
	{
		std::cout << "dstr, id = " << id_ << std::endl;
	}

private:
	int id_;
	static int count_;
};

int MyClass::count_ = 0;

int main()
{
	std::cout << "new MyClass" << std::endl;
	MyClass* a = new MyClass();
	std::cout << "delete MyClass" << std::endl;
	delete a;

	std::cout << std::endl;

	std::cout << "new MyClass[]" << std::endl;
	MyClass* arr = new MyClass[ 10];
	std::cout << "delete MyClass[]" << std::endl;
	delete[] arr;
}
