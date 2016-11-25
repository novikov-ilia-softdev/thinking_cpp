#ifndef PRINTER_H
#define PRINTER_H

#include <iostream>

namespace computer{

class Printer
{
public:
	static Printer& getInstance()
	{
		static Printer instance;
		return instance;
	}
	void print( const std::string& str) { std::cout << str << std::endl; }

private:
	Printer() {}
	Printer( const Printer&);
	Printer& operator=( Printer&);
};

};

#endif // PRINTER_H
