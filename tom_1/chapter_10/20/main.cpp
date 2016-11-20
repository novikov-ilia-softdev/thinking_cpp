#include "namespaceint.h"

void arithmetic()
{
	using namespace Int;
	Integer x;
	x.setSign( positive);
}

int main()
{
	arithmetic();
	//Integer x;	// error
}
