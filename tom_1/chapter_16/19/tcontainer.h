#ifndef TCONTAINER_H
#define TCONTAINER_H

#include <iostream>
#include <vector>

template<class T>
class TContainer{
private:
	std::vector<T*> container_;

public:
	void add( T* objPtr) { container_.push_back( objPtr); }
	class SmartPointer;
	friend class SmartPointer;

	class SmartPointer{
	private:
		TContainer& objContainer_;
		int index_;

	public:
		SmartPointer( TContainer &objContainer): objContainer_( objContainer), index_( 0) {}
		bool operator++()
		{
			if( objContainer_.container_.size() - 1 == index_)
				return false;

			index_++;
			return true;
		}

		bool operator++( int)
		{
			return operator++();
		}

		bool operator--()
		{
			if( !index_)
				return false;

			index_--;
			return true;
		}

		bool operator--( int)
		{
			return operator--();
		}

		T* current() const
		{
			if( index_ >= 0 && index_ < objContainer_.container_.size())
				return objContainer_.container_[ index_];

			return 0;
		}

		T* operator->() const
		{
			return current();
		}

		T* operator*() const
		{
			return current();
		}

		friend std::ostream& operator<<( std::ostream& stream, const SmartPointer& ptr)
		{
			return stream << ptr.objContainer_.container_[ ptr.index_];
		}
	};

	SmartPointer begin()
	{
		return SmartPointer( *this);
	}
};

#endif // TCONTAINER_H
