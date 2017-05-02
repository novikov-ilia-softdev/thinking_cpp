#ifndef PSTSH_H
#define PSTSH_H

class PStash{
public:
	PStash();
	~PStash();
	int add( void* element);
	void* operator[]( int index) const;
	void* remove( int index);
	int count() const;

private:
	void inflate( int increase);

private:
	int quantity_;
	int next_;
	void** storage_;
};

#endif // PSTSH_H
