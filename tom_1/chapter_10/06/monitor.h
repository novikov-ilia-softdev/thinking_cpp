#ifndef MONITOR_H
#define MONITOR_H

class Monitor{
public:
	Monitor();
	~Monitor();
	void incident();
	void decrement();
	void print();

private:
	static int incidentCount_;
};

#endif // MONITOR_H
