#include <iostream>

struct ExternalStruct{
	struct InternalStruct{
		std::string string;
		const std::string& hello();
	} internalStruct;

	std::string string;
	const std::string& hello();
};

const std::string& ExternalStruct::hello()
{
	return string;
}

const std::string& ExternalStruct::InternalStruct::hello()
{
	return string;
}

int main()
{
	ExternalStruct str1;
	str1.string = "ExternalStruct";
	str1.internalStruct.string = "InternalStruct";
	std::cout << "str1.hello()" << ": " << str1.hello() << std::endl;
	std::cout << "str1.internalStruct.hello()" << ": " << str1.internalStruct.hello() << std::endl;
}
