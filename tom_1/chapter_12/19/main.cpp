#include <iostream>

class Fi{
public:
	Fi() { std::cout << "Fi()" << std::endl; }
};

class Fee{
public:
	Fee( int) { std::cout << "Fee( int)" << std::endl; }
	Fee( const Fi&) { std::cout << "Fee( const Fi&)" << std::endl; }
};

int main()
{
	Fee fee = 1;
	Fi fi;
	Fee fum = fi;
	Fee fum1( fi);
}
