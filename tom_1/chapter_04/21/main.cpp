#include <iostream>

struct Struct{
};

enum Enum{
	red, green, blue
};

union Union{
	int i;
	char c;
};

int main()
{
	Struct s;
	Enum e;
	Union u;
}
