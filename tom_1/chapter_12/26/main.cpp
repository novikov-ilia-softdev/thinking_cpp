#include <iostream>

class Dog{
public:
	int run( int i) const
	{
		std::cout << "run" << std::endl;
		return i;
	}

	int eat( int i) const
	{
		std::cout << "eat" << std::endl;
		return i;
	}

	int sleep( int i) const
	{
		std::cout << "ZZZ" << std::endl;
		return i;
	}

	void seat() const
	{
		std::cout << "seat" << std::endl;
	}

	void stand() const
	{
		std::cout << "stand" << std::endl;
	}

	typedef int (Dog::*PMF)(int) const;
	typedef void (Dog::*PVMF)() const;

	class FunctionObject{
	public:
		FunctionObject( Dog* ptr, PMF pMem): ptr_( ptr), pMem_( pMem)
		{
			std::cout << "FunctionObject constructor" << std::endl;
		}

		int operator()(int i) const
		{
			std::cout << "FunctionObject::operator()" << std::endl;
			return (ptr_->*pMem_)( i);
		}

	private:
		Dog* ptr_;
		PMF pMem_;
	};

	class VoidFunctionObject{
	public:
		VoidFunctionObject( Dog* ptr, PVMF pMem): ptr_( ptr), pMem_( pMem)
		{
			std::cout << "VoidFunctionObject constructor" << std::endl;
		}

		void operator()() const
		{
			std::cout << "VoidFunctionObject::operator()" << std::endl;
			(ptr_->*pMem_)();
		}

	private:
		Dog* ptr_;
		PVMF pMem_;
	};

	FunctionObject operator->*( PMF pmf)
	{
		std::cout << "operator->*" << std::endl;
		return FunctionObject(this, pmf);
	}

	VoidFunctionObject operator->*( PVMF pmf)
	{
		std::cout << "operator->*" << std::endl;
		return VoidFunctionObject(this, pmf);
	}
};

int main()
{
	Dog w;
	Dog::PMF pmf = &Dog::run;
	std::cout << (w->*pmf)(1) << std::endl;

	pmf = &Dog::eat;
	std::cout << (w->*pmf)(2) << std::endl;

	pmf = &Dog::sleep;
	std::cout << (w->*pmf)(3) << std::endl;

	Dog::PVMF pvmf = &Dog::seat;
	(w->*pvmf)();

	pvmf = &Dog::stand;
	(w->*pvmf)();
}
