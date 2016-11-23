#ifndef MYCLASS2_H
#define MYCLASS2_H

#include "myclass.h"

namespace MyNamespace2{

class MyClass2{
private:
	static MyNamespace::MyClass obj_;

public:
	static void print()
	{
		obj_.print();
	}
};

MyNamespace::MyClass MyClass2::obj_( 5);

};

#endif // MYCLASS2_H
