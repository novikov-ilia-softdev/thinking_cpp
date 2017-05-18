#ifndef AUTOCOUNTER_H
#define AUTOCOUNTER_H

#include <set>
#include <iostream>

class AutoCounter{
private:
	static int count_;
	int id_;

	class CleanupCheck{
	private:
		std::set<AutoCounter*> trace_;

	public:
		void add( AutoCounter* ac)
		{
			trace_.insert( ac);
		}
		void remove( AutoCounter* ac)
		{
			trace_.erase( ac);
		}
		~CleanupCheck()
		{
			std::cout << "~CleanupCheck, size = " << trace_.size() << std::endl;
		}
	};

	static CleanupCheck verifier_;

	AutoCounter(): id_( count_++)
	{
		verifier_.add( this);
		std::cout << "created [" << id_ << "]" << std::endl;
	}

	AutoCounter( const AutoCounter&);
	AutoCounter& operator=( const AutoCounter&);

public:
	static AutoCounter* create()
	{
		return new AutoCounter();
	}

	~AutoCounter()
	{
		std::cout << "destroyed [" << id_ << "]" << std::endl;
		verifier_.remove( this);
	}

	friend std::ostream& operator<<( std::ostream& os, const AutoCounter& ac)
	{
		return os << "AutoCounter " << ac.id_;
	}

	friend std::ostream& operator<<( std::ostream& os, const AutoCounter* ac)
	{
		return os << "AutoCounter " << ac->id_;
	}
};

#endif // AUTOCOUNTER_H
