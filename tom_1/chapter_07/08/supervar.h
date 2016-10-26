#ifndef SUPERVAR_H
#define SUPERVAR_H

enum VarType{
		character,
		integer,
		floating_point
};

class SuperVar{
public:
	SuperVar( char ch);
	SuperVar( int ii);
	SuperVar( float ff);
	void print( VarType vartype);

private:
	union{
		char c;
		int i;
		float f;
	};
};

#endif // SUPERVAR_H
