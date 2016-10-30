#ifndef QUOTER_H
#define QUOTER_H

class Quoter{
public:
	Quoter();
	int getLastQuote() const;
	const char* quote() const;

private:
	mutable int _lastQuote;
};

#endif // QUOTER_H
