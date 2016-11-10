#ifndef X_H
#define X_H

#include <iostream>

class X{
public:
	inline X( int constInt);
	inline void printArr();

private:
	static const int size_ = 10;
	int arr_[ size_];
	const int constInt_;
	static int staticInt_;

	static void printStaticInt_();
};

X::X( int constInt): constInt_( constInt)
{

}

void X::printArr()
{
	for( int i = 0; i < size_; i++)
	{
		std::cout << arr_[ i] << " ";
	}
	std::cout << std::endl;

	printStaticInt_();
}

#endif // X_H
