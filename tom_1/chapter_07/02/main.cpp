#include <iostream>

class Message{
public:
	Message( const std::string& message = std::string("message"));
	void print() const;
	void print( const std::string& message) const;

private:
	std::string _message;
};

Message::Message( const std::string& message): _message( message)
{

}

void Message::print() const
{
	std::cout << "void Message::print() const" << std::endl;
	std::cout << _message << std::endl;
	std::cout << std::endl;
}

void Message::print( const std::string& message) const
{
	std::cout << "void Message::print( const std::string& message) const" << std::endl;
	std::cout << message << " " << _message << std::endl;
	std::cout << std::endl;
}

int main()
{
	Message msg;
	msg.print( "hello!");
	msg.print();

	Message msg2( "wow!");
	msg2.print( "bye!");
	msg2.print();
}
