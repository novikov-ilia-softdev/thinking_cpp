int main()
{
	// 1
	int &a;

	// 2
	int b = 5;
	int c = 6;
	int &d = b;
	&d = c;

	//3
	int &n = 0;
}
