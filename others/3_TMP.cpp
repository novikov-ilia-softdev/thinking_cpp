// Вычисление факториала с помощью TMP
// (на этапе компиляции!)
#include <conio.h>

#include <iostream>
using namespace std;

// Общий случай
template<unsigned n>
struct Factorial {
	enum { value = n * Factorial<n-1>::value };
};

// Частный случай (нерекурсиваня ветвь)
template<>
struct Factorial<0> {
	enum { value = 1 };
};

int main()
{	
	cout << Factorial<5>::value << endl;
	cout << Factorial<10>::value << endl;

	_getch();
}