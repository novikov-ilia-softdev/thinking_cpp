#ifndef VIDEO_H
#define VIDEO_H

#include <string>

struct Video{

	std::string title;
	int year;
	int duration;

	const std::string & getTitle();
	void setTitle( const std::string &s);
	int getYear();
	void setYear( int i);
	int getDuration();
	void setDuration( int i);
	void print();
};

#endif // VIDEO_H
