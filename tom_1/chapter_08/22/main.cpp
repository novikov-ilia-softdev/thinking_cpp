class X{
private:
	int _i;

public:
	X( int i);
	int f() const;
};

X::X( int i): _i( i) {}
int X::f() const { return _i; }

int main()
{
	X x1( 10);
	const X x2( 20);
	x1.f();
	x2.f();
}
