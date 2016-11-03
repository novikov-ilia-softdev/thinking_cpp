#ifndef HOLDER_H
#define HOLDER_H

class Pointer;

class Holder{
public:
	Holder();
	friend class Pointer;
	inline int getSize() const;

private:
	static const int _size = 20;
	int _a[ _size];
};

int Holder::getSize() const
{
	return _size;
}


#endif // HOLDER_H
