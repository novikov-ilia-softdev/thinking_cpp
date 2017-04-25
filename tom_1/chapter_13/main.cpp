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
	MyClass a, b, c;
}
