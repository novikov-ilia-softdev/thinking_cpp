#ifndef HOLDER_H
#define HOLDER_H

class Holder{
public:
	Holder();
	class Pointer;
	friend class Pointer;

private:
	static const int _size = 20;
	int _a[ _size];
};

#endif // HOLDER_H
