class X{
private:
	int _i;
	mutable int _j;

public:
	X(): _i( 0), _j( 0) {}
	void inc() const
	{
		_i++;	// error
		_j++;
	}
};

int main()
{
	const X x;
	x.inc();
}
