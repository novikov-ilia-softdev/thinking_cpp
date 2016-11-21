#include "namespacemath.h"
#include "namespaceoverriding2.h"

void s()
{
	using namespace Math;
	using namespace Calculation;

	//divide( 1, 2);
	Math::divide( 1, 2);
	//Calculation::divide( 1, 2);
}

int main()
{
}
