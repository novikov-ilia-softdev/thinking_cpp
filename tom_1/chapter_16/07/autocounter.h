#ifndef AUTOCOUNTER_H
#define AUTOCOUNTER_H

#include <set>
#include <iostream>
#include <boost/lexical_cast.hpp>

class AutoCounter{
private:
	static int count_;
	int id_;
	std::string name_;

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

	AutoCounter( const AutoCounter&);
	AutoCounter& operator=( const AutoCounter&);

public:
	AutoCounter(): id_( count_++)
	{
		name_ = "AutoCounter::" + boost::lexical_cast<std::string>( id_);
		verifier_.add( this);
		std::cout << "created [" << id_ << "]" << std::endl;
	}

	~AutoCounter()
	{
		std::cout << "destroyed [" << id_ << "]" << std::endl;
		verifier_.remove( this);
	}

	const std::string& getName() const { return name_; }

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
