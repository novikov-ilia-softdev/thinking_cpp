#include <iostream>
#include <fstream>

class Text{
public:
	Text();
	Text( const std::string& filePath);
	const std::string& getContent() const;

private:
	std::string _content;
	std::string _filePath;
};

Text::Text()
{

}

Text::Text( const std::string& filePath): _filePath( filePath)
{
	std::ifstream in( _filePath.c_str());
	std::string s;
	while( getline( in, s))
	{
		_content += s;
		_content += "\n";
	}
}

const std::string& Text::getContent() const
{
	return _content;
}

int main()
{
	std::string filePath = "main.cpp";
	Text text( filePath);
	std::cout << text.getContent() << std::endl;
}
