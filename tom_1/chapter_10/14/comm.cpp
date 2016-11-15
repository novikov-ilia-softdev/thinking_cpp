#include "comm.h"

const volatile unsigned char Comm::byte_ = 0;
volatile unsigned char Comm::flag_ = 0;
unsigned char Comm::buf_[ bufsize_];
int Comm::index_ = 0;

Comm::Comm()
{

}

void Comm::isr()
{
	flag_ = 0;
	buf_[ index_++] = byte_;
	if( index_ >= bufsize_)
		index_ = 0;
}
