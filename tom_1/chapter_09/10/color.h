#ifndef COLOR_H
#define COLOR_H

#include "hue.h"

class Color{
public:
	Color( Hue hue);
	inline Hue getHue() const;
	inline void setHue( Hue hue);

private:
	Hue _hue;
};

Hue Color::getHue() const
{
	return _hue;
}

void Color::setHue( Hue hue)
{
	_hue = hue;
}

#endif // COLOR_H
