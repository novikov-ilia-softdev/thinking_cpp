#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

namespace MyNamespace{

class MyClass{
public:
	static void print()
	{
		std::cout << "longValue: " << longValue_ << std::endl;
		std::cout << "doubleValue: " << doubleValue_ << std::endl;
	}

private:
	static const long longValue_ = 7;
	static const double doubleValue_ = 3.14;
};

};

#endif // MYCLASS_H
