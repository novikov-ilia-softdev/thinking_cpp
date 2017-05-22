#ifndef ITERINTSTACK_H
#define ITERINTSTACK_H

class IntStack{
private:
	enum { size_ = 100 };
	int stack_[ size_];
	int top_;

public:
	IntStack(): top_( 0) {}
	void push( int i)
	{
		if( top_ < size_)
			stack_[ top_++] = i;
	}
	int pop()
	{
		if( top_ >= 0)
			return stack_[ --top_];
	}

	class iterator;
	friend class iterator;
	class iterator{
	private:
		IntStack& s_;
		int index_;

	public:
		iterator( IntStack& s) : s_( s), index_( 0) {}
		iterator( IntStack& s, bool) : s_( s), index_( s_.top_) {}
		int operator++()
		{
			if( index_ < s_.top_)
				return s_.stack_[ index_++];
		}
		int operator++( int)
		{
			if( index_ < s_.top_)
				return s_.stack_[ index_++];
		}

		int current() const
		{
			return s_.stack_[ index_];
		}
		int operator*() const
		{
			return current();
		}
		int operator->() const
		{
			return current();
		}

		bool operator==( const iterator& right)
		{
			return (index_ == right.index_);
		}
		bool operator!=( const iterator& right)
		{
			return !( *this == right);
		}
	};

	iterator begin() { return iterator( *this); }
	iterator end() { return iterator( *this, true); }
};

#endif // ITERINTSTACK_H
