#ifndef MYCLASS2_H
#define MYCLASS2_H

#include "myclass.h"

namespace MyNamespace2{

class MyClass2{
public:
	static void print()
	{
		objPtr_->print();
	}

private:
	static MyNamespace::MyClass* objPtr_;
};

};

#endif // MYCLASS2_H
