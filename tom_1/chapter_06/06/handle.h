#ifndef HANDLE_H
#define HANDLE_H

class Handle{
private:
	struct Cheshire;
	Cheshire* smile;
	void initialize();
	void cleanup();

public:
	Handle();
	~Handle();
	int read();
	void change( int);
};

#endif // HANDLE_H
