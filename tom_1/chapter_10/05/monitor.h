#ifndef MONITOR_H
#define MONITOR_H

class Monitor{
public:
	void incident();
	void decrement();
	void print();

private:
	static int incidentCount_;
};

#endif // MONITOR_H
