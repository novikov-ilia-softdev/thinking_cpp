#include <iostream>

class MyClass{
public:
	void showMap() const;
	int publicInt;
	char publicChar;

protected:
	int protectedInt;
	char protectedChar;

private:
	int privateInt;
	char privateChar;
};

void MyClass::showMap() const
{
	std::cout << "MyClass::showMap" << std::endl;
	std::cout << "&publicInt: " << (long)&publicInt << ", publicInt: " << publicInt << std::endl;
	std::cout << "&publicChar: " << (long)&publicChar << ", publicChar: " << publicChar << std::endl;
	std::cout << "&protectedInt: " << (long)&protectedInt << ", protectedInt: " << protectedInt << std::endl;
	std::cout << "&protectedChar: " << (long)&protectedChar << ", protectedChar: " << protectedChar << std::endl;
	std::cout << "&privateInt: " << (long)&privateInt << ", privateInt: " << privateInt << std::endl;
	std::cout << "&privateChar: " << (long)&privateChar << ", privateChar: " << privateChar << std::endl;
}

int main(){
	MyClass obj;
	obj.showMap();
}
