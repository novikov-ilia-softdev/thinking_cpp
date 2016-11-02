#ifndef POINTER_H
#define POINTER_H

#include "holder.h"

class Pointer{
public:
	Pointer( Holder* h);
	inline void next();
	inline void previous();
	inline void top();
	inline void end();
	inline int read();
	inline void set( int i);

private:
	Holder* _h;
	int* _p;
};


#endif // POINTER_H
