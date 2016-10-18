#include <iostream>

int main()
{
	int* intPtr = new int;
	std::cout << "intPtr: " << (long)intPtr << std::endl;

	long* longPtr = new long;
	std::cout << "longPtr: " << (long)longPtr << std::endl;

	char* charArrPtr = new char[ 100];
	std::cout << "charArrPtr: " << (long)charArrPtr << std::endl;

	float* floatArrPtr = new float[ 100];
	std::cout << "floatArrPtr: " << (long)floatArrPtr << std::endl;

	delete intPtr;
	delete longPtr;
	delete [] charArrPtr;
	delete [] floatArrPtr;


}
