#include <iostream>

enum note { middleC, Csharp, Cflat };

class Instrument{
public:
	void play( note) const { std::cout << "Instrument::play" << std::endl; }
	char* what() const { return "Instrument"; }
	void adjust( int) { std::cout << "Instrument::adjust" << std::endl; }

	virtual ~Instrument() {}
};

class Wind: public Instrument{
public:
	void play( note) const { std::cout << "Wind::play" << std::endl; }
	char* what() const { return "Wind"; }
	void adjust( int) { std::cout << "Wind::adjust" << std::endl; }
};

class Percussion: public Instrument{
public:
	void play( note) const { std::cout << "Percussion::play" << std::endl; }
	char* what() const { return "Percussion"; }
	void adjust( int) { std::cout << "Percussion::adjust" << std::endl; }
};

class Stringed: public Instrument{
public:
	void play( note) const { std::cout << "Stringed::play" << std::endl; }
	char* what() const { return "Stringed"; }
	void adjust( int) { std::cout << "Stringed::adjust" << std::endl; }
};

class Brass: public Wind{
public:
	void play( note) const { std::cout << "Brass::play" << std::endl; }
	char* what() const { return "Brass"; }
};

class Woodwind: public Wind{
public:
	void play( note) const { std::cout << "Woodwind::play" << std::endl; }
	char* what() const { return "Woodwind"; }
};

void tune( Instrument& i)
{
	//i.play( middleC);

	// imitating virtual functions
	Percussion* percussion = dynamic_cast<Percussion*>( &i);
	if( percussion)
	{
		percussion->play( middleC);
		return;
	}

	Stringed* stringed = dynamic_cast<Stringed*>( &i);
	if( stringed)
	{
		stringed->play( middleC);
		return;
	}

	Brass* brass = dynamic_cast<Brass*>( &i);
	if( brass)
	{
		brass->play( middleC);
		return;
	}

	Woodwind* woodwind = dynamic_cast<Woodwind*>( &i);
	if( woodwind)
	{
		woodwind->play( middleC);
		return;
	}

	Wind* wind = dynamic_cast<Wind*>( &i);
		if( wind){
			wind->play( middleC);
			return;
		}
}

void f( Instrument& i)
{
	i.adjust( 1);
}

Instrument* A[] = {
	new Wind,
	new Percussion,
	new Stringed,
	new Brass
};

int main()
{
	Wind flute;
	Percussion drum;
	Stringed violin;
	Brass flugehorn;
	Woodwind recorder;

	tune( flute);
	tune( drum);
	tune( violin);
	tune( flugehorn);
	tune( recorder);

	f( flugehorn);

}
