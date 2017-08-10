#include <iostream>
#include <cerrno>
#include <csignal>

// g++ main.cpp

int returnErrorCodeFunc()
{
	return -1;
}

void setErrnoCodeFunc()
{
	errno = EDOM;
}

void signalHandler( int signal)
{
	std::cout << "signalHandler, signal = " << signal << std::endl;
}

void throwExceptionFunc()
{
	throw 25;
}

int main()
{
	if( returnErrorCodeFunc() == -1)
	{
		std::cout << "returnErrorCodeFunc" << std::endl;
	}

	setErrnoCodeFunc();
	if( errno == EDOM)
	{
		std::cout << "setErrnoCodeFunc" << std::endl;
	}

	std::signal( SIGINT, signalHandler);
	std::raise( SIGINT);

	try
	{
		throwExceptionFunc();
	}
	catch( int n)
	{
		std::cout << "exception " << n << " catched!" << std::endl;
	}
}
