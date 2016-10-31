#include <iostream>

#define BAND(x)							\
		({ typeof (x) x_ = (x);          \
		((x_)>5&&(x_)<10) ? (x_) : 0; })

int main()
{
	for( int i = 4; i < 11; i++)
	{
		int a = i;
		std::cout << "a = " << a << std::endl;
		std::cout << "BAND(++a) = " << BAND(++a) << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << std::endl;
	}
}
