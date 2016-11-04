#include "cpptime.h"

Time::Time()
{
	_mark();
}

void Time::_mark()
{
	_lflag = 0;
	_aflag = 0;
	std::time( &_t);
}

const char* Time::ascii()
{
	_updateAscii();
	return _asciiRep;
}

int Time::delta( Time* dt) const
{
	return int( std::difftime( _t, dt->_t));
}

int Time::daylightSavings()
{
	_updateLocal();
	return _local.tm_isdst;
}

int Time::dayOfYear()
{
	_updateLocal();
	return _local.tm_yday;
}

int Time::dayOfWeek()
{
	_updateLocal();
	return _local.tm_wday;
}

int Time::since1900()
{
	_updateLocal();
	return _local.tm_year;
}

int Time::month()
{
	_updateLocal();
	return _local.tm_mon;
}

int Time::dayOfMonth()
{
	_updateLocal();
	return _local.tm_mday;
}

int Time::hour()
{
	_updateLocal();
	return _local.tm_hour;
}

int Time::minute()
{
	_updateLocal();
	return _local.tm_min;
}

int Time::second()
{
	_updateLocal();
	return _local.tm_sec;
}

void Time::_updateLocal()
{
	if( !_lflag)
	{
		_local = *std::localtime( &_t);
		_lflag++;
	}
}

void Time::_updateAscii()
{
	if( !_aflag)
	{
		_updateLocal();
		std::strcpy( _asciiRep, std::asctime( &_local));
		_aflag++;
	}
}
