#ifndef TVECTOR_H
#define TVECTOR_H

#include <vector>
#include "object.h"

template<class T>
class TVector: public T, public Object{
private:
	std::vector<T*> vector_;

public:
	void push( T* dat)
	{
		vector_.push_back( dat);
	}

	T* pop()
	{
		if( !vector_.size())
			return 0;

		T* res = vector_[ vector_.size() - 1];
		vector_.pop_back();
		return res;
	}
};

#endif //TVECTOR_H
