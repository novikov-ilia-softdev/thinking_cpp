#ifndef NAMESPACEINT_H
#define NAMESPACEINT_H

namespace Int{

enum sign { positive, negative};

class Integer{
public:
	Integer( int i = 0): i_( i), s_( i >= 0 ? positive : negative) {}
	sign getSign() const { return s_;}
	void setSign( sign s) { s_ = s;}

private:
	int i_;
	sign s_;
};

}

#endif // NAMESPACEINT_H
