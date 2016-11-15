#ifndef COMM_H
#define COMM_H

class Comm{
public:
	Comm();
	static void isr();

private:
	static const volatile unsigned char byte_;
	static volatile unsigned char flag_;
	enum { bufsize_ = 100};
	static unsigned char buf_[ bufsize_];
	static int index_;
};

#endif // COMM_H
