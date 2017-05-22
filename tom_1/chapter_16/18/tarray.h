#ifndef TARRAY_H
#define TARRAY_H

#include <iostream>
#include <cstring>

template<class T, int size = 5>
class TArray{
private:
	T arr_[ size];

public:
	TArray()
	{
		memset( arr_, 0, size * sizeof( *arr_));
	}
	T& operator[]( int index)
	{
		return arr_[ index];
	}
	friend std::ostream& operator<<( std::ostream& os, const TArray<T>& arr)
	{
		for( int i = 0; i < size; i++)
		{
			os << arr.arr_[ i];
			if( i != size - 1)
				os << ", ";
		}
		return os;
	}
	friend std::istream& operator>>( std::istream& is, TArray<T>& arr)
	{
		for( int i = 0; i < size; i++)
		{
			is >> arr.arr_[ i];
		}
		return is;
	}
};

#endif // TARRAY_H
