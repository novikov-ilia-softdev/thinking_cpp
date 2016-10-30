#include "quoter.h"
#include <cstdlib>
#include <ctime>

Quoter::Quoter()
{
	_lastQuote = -1;
	srand( time( 0));
}

int Quoter::getLastQuote() const
{
	return _lastQuote;
}

const char* Quoter::quote() const
{
	static const char* quotes[] = {
			"Are we having fun yet?",
			"Doctor always know best",
			"Is it ... Atomic?",
			"Fear is obscene",
			"There is no scientific evidence "
			"to support the idea "
			"that life is serious",
			"Things that make us happy, make us wise"
	};

	const int qsize = sizeof( quotes) / sizeof( *quotes);
	int qnum = rand() % qsize;

	while( _lastQuote >= 0 && qnum == _lastQuote)
	{
		qnum = rand() % qsize;
	}

	return quotes[ _lastQuote = qnum];
}
