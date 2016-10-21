#include <iostream>

class MyClass{
public:
	const std::string& getA() const { return a; };
	const std::string& getB() const { return b; };

private:
	friend void globalFriendFunc( MyClass&);
	std::string a;
	std::string b;
};

void globalFriendFunc( MyClass& obj)
{
	obj.a = "a changed in friend function";
	obj.b = "b changed in friend function";
}

int main(){
	MyClass obj;

	std::cout << "before globalFriendFunc:" << std::endl;
	std::cout << "obj.getA(): " << obj.getA() << std::endl;
	std::cout << "obj.getB(): " << obj.getB() << std::endl;

	globalFriendFunc( obj);

	std::cout << "\nafter globalFriendFunc:" << std::endl;
	std::cout << "obj.getA(): " << obj.getA() << std::endl;
	std::cout << "obj.getB(): " << obj.getB() << std::endl;
}
