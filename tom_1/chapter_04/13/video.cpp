#include "video.h"
#include <iostream>

const std::string& Video::getTitle()
{
	return title;
}

void Video::setTitle( const std::string& s)
{
	title = s;
}

int Video::getYear()
{
	return year;
}

void Video::setYear( int i)
{
	year = i;
}

int Video::getDuration()
{
	return duration;
}

void Video::setDuration( int i)
{
	duration = i;
}

void Video::print()
{
	std::cout << "title: " << std::cout << title << std::endl;
	std::cout << "year: " << std::cout << year << std::endl;
	std::cout << "duration: " << std::cout << duration << std::endl;
	std::cout << std::endl;
}
