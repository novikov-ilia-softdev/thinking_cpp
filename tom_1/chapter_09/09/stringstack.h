#ifndef STRINGSTACK_H
#define STRINGSTACK_H

#include <string>

class StringStack{
public:
	StringStack();
	inline void push( const std::string* s);
	inline const std::string* pop();

private:
	static const int _size = 100;
	const std::string* _stack[ _size];
	int _index;
};

void StringStack::push( const std::string* s)
{
	if( _index < _size)
	{
		_stack[ _index++] = s;
	}
}

const std::string* StringStack::pop()
{
	if( _index > 0)
	{
		const std::string* rv = _stack[ --_index];
		_stack[ _index] = 0;
		return rv;
	}

	return 0;
}

#endif // STRINGSTACK_H
