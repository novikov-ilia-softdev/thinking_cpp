#include <iostream>

enum note { middleC, Csharp, Cflat };

class Instrument{
public:
	virtual void play( note) const { std::cout << "Intrument::play" << std::endl; }
	void prepare( note) const { std::cout << "Intrument::prepare" << std::endl; }
};

class Wind: public Instrument{
public:
	void play( note) const { std::cout << "Wind::play" << std::endl; }
};

void tune( Instrument& i)
{
	i.play( middleC);
	i.prepare( middleC);
}

int main()
{
	Wind flute;
	tune( flute);
}
