#include <iostream>

struct StructWithOnlyVariables{
	int i;
	std::string str;
};

struct StructWithVariablesAndFunctions{
	int i;
	std::string str;
	void f() {}
};

struct EmptyStruct{
};

int main()
{
	StructWithOnlyVariables structWithOnlyVariables;
	StructWithVariablesAndFunctions structWithVariablesAndFunctions;
	EmptyStruct emptyStruct;

	std::cout << "sizeof( structWithOnlyVariables): " << sizeof( structWithOnlyVariables) << std::endl;
	std::cout << "sizeof( structWithVariablesAndFunctions): " << sizeof( structWithVariablesAndFunctions) << std::endl;
	std::cout << "sizeof( emptyStruct): " << sizeof( emptyStruct) << std::endl;
	std::cout << std::endl;
	std::cout << "sizeof( StructWithOnlyVariables): " << sizeof( StructWithOnlyVariables) << std::endl;
	std::cout << "sizeof( StructWithVariablesAndFunctions): " << sizeof( StructWithVariablesAndFunctions) << std::endl;
	std::cout << "sizeof( EmptyStruct): " << sizeof( EmptyStruct) << std::endl;
}
