#include <iostream>

class IPet{
public:
	IPet( const std::string& name);
	virtual std::string name() const = 0;
	virtual std::string speak() const = 0;
	virtual ~IPet() = 0;

private:
	std::string name_;
};

IPet::IPet( const std::string& name): name_( name) {}
std::string IPet::name() const { return name_; }
IPet::~IPet() { }

class Dog: public IPet{
public:
	Dog( const std::string& name) : IPet( name) {}
	std::string name() const { return IPet::name(); }
	virtual std::string sit() const { return name() + "sits"; }
	std::string speak() const { return name() + " says 'Bark!'"; }

private:
	std::string name_;
};

int main()
{
	IPet* p[] = { new Dog( "Bob") };
	std::cout << p[ 0]->speak() << std::endl;
}
