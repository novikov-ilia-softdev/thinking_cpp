#ifndef MIRROR_H
#define MIRROR_H

class Mirror
{
public:
	Mirror(): ptr_( 0), boolValue_( true) {}
	Mirror( Mirror* ptr): ptr_( ptr), boolValue_( false) {}
	bool test() { return (ptr_ ? ptr_->test() : boolValue_); }

private:
	Mirror* ptr_;
	bool boolValue_;
};

#endif // MIRROR_H
