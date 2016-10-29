class X{
private:
	int _i;

public:
	X( int i);
	int get() const;
	void set( int i);
};

X::X( int i): _i( i) {}
int X::get() const { return _i; }
void X::set( int i) { _i = i; }

int main()
{
	X x1( 10);
	const X x2( 20);
	x1.get();
	x1.set( 15);
	x2.get();
	//x2.set( 30);	// error
}
