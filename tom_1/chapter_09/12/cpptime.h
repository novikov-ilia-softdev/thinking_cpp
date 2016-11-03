#ifndef CPPTIME_H
#define CPPTIME_H

#include <ctime>
#include <cstring>

class Time{
public:
	Time();
	void mark();
	const char* ascii();
	int delta( Time* dt) const;
	int daylightSavings();
	int dayOfYear();
	int dayOfWeek();
	int since1900();
	int month();
	int dayOfMonth();
	int hour();
	int minute();
	int second();

private:
	std::time_t _t;
	std::tm _local;
	char _asciiRep[ 26];
	unsigned char _lflag;
	unsigned char _aflag;
	void _updateLocal();
	void _updateAscii();

};

#endif // CPPTIME_H
