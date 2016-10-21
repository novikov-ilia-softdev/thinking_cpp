#include <iostream>

class MyClass{
public:
	int publicI;
	void publicF(){ std::cout << "publicF" << std::endl; }

protected:
	int protectedI;
	void protectedF(){ std::cout << "protectedF" << std::endl; }

private:
	int privateI;
	void privateF(){ std::cout << "privateF" << std::endl; }
};

int main(){
	MyClass obj;
	obj.publicI = 5;
	obj.publicF();

	obj.protectedI = 6;
	obj.protectedF();

	obj.privateI = 7;
	obj.privateF();
}
