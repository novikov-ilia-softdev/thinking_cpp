#include <iostream>

class X{
public:
	inline void hello();

private:
	inline void _world();
};

inline void X::hello()
{
	std::cout << "hello" << std::endl;
	_world();
}

inline void X::_world()
{
	std::cout << "world" << std::endl;
}

int main()
{
	X x;
	x.hello();
}
