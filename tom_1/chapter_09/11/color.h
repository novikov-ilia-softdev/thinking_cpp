#ifndef COLOR_H
#define COLOR_H

#include "hue.h"

class Color{
public:
	Color( Hue hue);
	inline Hue getSetHue( Hue hue = unknown);

private:
	Hue _hue;
	inline Hue getHue() const;
	inline void setHue( Hue hue);
};

inline Hue Color::getSetHue( Hue hue)
{
	if( hue == unknown)
		return getHue();

	setHue( hue);
	return hue;
}

Hue Color::getHue() const
{
	return _hue;
}

void Color::setHue( Hue hue)
{
	_hue = hue;
}

#endif // COLOR_H
