#include <iostream>

template<class T>
class Dog{
public:
	T run() const
	{
		std::cout << "run" << std::endl;
	}

	T eat( int i) const
	{
		std::cout << "eat" << std::endl;
		return i;
	}

	T seat( int i, int j) const
	{
		std::cout << "seat" << std::endl;
		return i + j;
	}

	typedef T (Dog::*PZMF)() const;
	typedef T (Dog::*P1MF)(int) const;
	typedef T (Dog::*P2MF)(int, int) const;

	class FunctionObject{
	public:
		FunctionObject( Dog* ptr, PZMF pMem): ptr_( ptr), pZMem_( pMem)
		{
			std::cout << "FunctionObject constructor" << std::endl;
		}

		FunctionObject( Dog* ptr, P1MF pMem): ptr_( ptr), p1Mem_( pMem)
		{
			std::cout << "FunctionObject constructor" << std::endl;
		}

		FunctionObject( Dog* ptr, P2MF pMem): ptr_( ptr), p2Mem_( pMem)
		{
			std::cout << "FunctionObject constructor" << std::endl;
		}

		T operator()() const
		{
			std::cout << "FunctionObject::operator()" << std::endl;
			return (ptr_->*pZMem_)();
		}

		T operator()(int i) const
		{
			std::cout << "FunctionObject::operator( int i)" << std::endl;
			return (ptr_->*p1Mem_)( i);
		}

		T operator()(int i, int j) const
		{
			std::cout << "FunctionObject::operator( int i, int j)" << std::endl;
			return (ptr_->*p2Mem_)( i, j);
		}

	private:
		Dog* ptr_;
		PZMF pZMem_;
		P1MF p1Mem_;
		P2MF p2Mem_;
	};

	FunctionObject operator->*( PZMF pmf)
	{
		std::cout << "operator->*" << std::endl;
		return FunctionObject(this, pmf);
	}

	FunctionObject operator->*( P1MF pmf)
	{
		std::cout << "operator->*" << std::endl;
		return FunctionObject(this, pmf);
	}

	FunctionObject operator->*( P2MF pmf)
	{
		std::cout << "operator->*" << std::endl;
		return FunctionObject(this, pmf);
	}
};

int main()
{
	typedef Dog<int> DogInt;
	typedef Dog<int>::PZMF DogIntPZMF;
	typedef Dog<int>::P1MF DogIntP1MF;
	typedef Dog<int>::P2MF DogIntP2MF;

	DogInt w;
	DogIntPZMF pzmf = &DogInt::run;
	std::cout << (w->*pzmf)() << std::endl;
	std::cout << std::endl;

	DogIntP1MF p1mf = &DogInt::eat;
	std::cout << (w->*p1mf)( 1) << std::endl;
	std::cout << std::endl;

	DogIntP2MF p2mf = &DogInt::seat;
	std::cout << (w->*p2mf)( 2, 3) << std::endl;
	std::cout << std::endl;
}
