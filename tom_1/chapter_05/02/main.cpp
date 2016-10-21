#include <iostream>

struct Lib{
	//std::string a;
	//std::string b;
	//std::string c;
	std::string s[3];
};

class Libc{
public:
	const std::string& getA() { return strArr[0]; };
	void setA( const std::string& s) { strArr[ 0] = s; };

	const std::string& getB() { return strArr[ 1]; };
	void setB( const std::string& s) { strArr[ 1] = s; };

	const std::string& getC() { return strArr[ 2]; };
	void setC( const std::string& s) { strArr[ 2] = s; };

private:
	std::string a;
	std::string b;
	std::string c;
	std::string strArr[ 3];
};

int main(){
	/*
	Lib x;
	x.a = "a";
	x.b = "b";
	x.c = "c";
	std::cout << "x.a: " <<  x.a << std::endl;
	std::cout << "x.b: " <<  x.b << std::endl;
	std::cout << "x.c: " <<  x.c << std::endl;
	*/

	Libc x;
	x.setA( "a");
	x.setB( "b");
	x.setC( "c");
	std::cout << "x.a: " <<  x.getA() << std::endl;
	std::cout << "x.b: " <<  x.getB() << std::endl;
	std::cout << "x.c: " <<  x.getC() << std::endl;
}
