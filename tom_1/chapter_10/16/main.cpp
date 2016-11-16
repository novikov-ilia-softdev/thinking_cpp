#include "h2.h"

int main()
{
	h1::hello1();
	namespace aliasNamespace = h1;
	aliasNamespace::hello2();
	using namespace h1;
	hello3();
	hello4();
}
