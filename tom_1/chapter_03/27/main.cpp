#include <iostream>

int main()
{
	const float constFloatArray[] = {3.14, 2.71};

	std::cout << "const array:" << std::endl;
	for( int i = 0; i < 2; i++)
	{
		std::cout << constFloatArray[ i] << " ";
	}

	for( int i = 0; i < 2; i++)
	{
		float* fPtr = const_cast<float*>( &constFloatArray[ i]);
		*fPtr = 9.8;
	}

	std::cout << std::endl;
	std::cout << "disable const array:" << std::endl;
	for( int i = 0; i < 2; i++)
	{
		std::cout << constFloatArray[ i] << " ";
	}

	volatile float volatileFloatArray[] = {3.14, 2.71};

	std::cout << std::endl;
	std::cout << "volatile array:" << std::endl;
	for( int i = 0; i < 2; i++)
	{
		std::cout << volatileFloatArray[ i] << " ";
	}

	for( int i = 0; i < 2; i++)
	{
		float* fPtr = const_cast<float*>( &volatileFloatArray[ i]);
		*fPtr = 9.8;
	}
	std::cout << std::endl;
	std::cout << "disable volatile array:" << std::endl;
	for( int i = 0; i < 2; i++)
	{
		std::cout << volatileFloatArray[ i] << " ";
	}
}
