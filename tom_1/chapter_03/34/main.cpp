#include <iostream>

#define DF(N) std::string N() { std::string str = "function " + std::string(#N) + " called\n"; return str; }

DF( a);	DF( b); DF( c); DF( d); DF( e); DF( f); DF( g);

std::string (*func_table[])() = {a, b, c, d, e, f, g};

int main()
{
	while(1)
	{
		std::cout << "Input a-g, q - to quit: ";
		char c;
		std::cin >> c;
		if( c == 'q')
			break;
		if( c < 'a' || c > 'g')
			continue;

		std::cout << (*func_table[c - 'a'])();
	}
}
