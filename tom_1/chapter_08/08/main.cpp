int main()
{
	const long* ptr;
	long const* ptr2;

	ptr = new long[ 5];
	ptr++;
	ptr += 2;
	ptr--;
	//*ptr = 6;
}
