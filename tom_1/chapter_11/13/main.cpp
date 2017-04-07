struct Big{
	char buf[ 100];
	int i;
	long d;
} B, B2;

Big bigFun( Big b)
{
	b.i = 100;
	return b;
}

int main()
{
	B2 = bigFun( B);
}
