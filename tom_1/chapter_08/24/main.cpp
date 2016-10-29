class X{
private:
	int _i;

public:
	X( int i);
	int get() const;
	void set( int i);
};

X::X( int i): _i( i) {}
int X::get() const
{
	set( 5);	// error
	return _i;
}

void X::set( int i)
{
	_i = i;
}

int main()
{

}
