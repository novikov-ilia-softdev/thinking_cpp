#ifndef TVECTOR_H
#define TVECTOR_H

#include <vector>

typedef std::vector<void*> vectorVoid;

template<class T>
class TVector: public vectorVoid{
public:
	void push_back( T* strPtr)
	{
		std::cout << "TVector::push_back" << std::endl;
		vectorVoid::push_back( strPtr);
	}

	T* operator[]( int index)
	{
		std::cout << "TVector::operator[]" << std::endl;
		return (T*)vectorVoid::operator[]( index);
	}
};

#endif //TVECTOR_H
