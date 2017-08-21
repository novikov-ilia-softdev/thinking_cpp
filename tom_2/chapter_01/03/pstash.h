#ifndef PSTSH_H
#define PSTSH_H

#include <stdexcept>

class PStash{
public:
	PStash();
	~PStash();
	int add( void* element);
	void* operator[]( int index) const throw( std::out_of_range);
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
