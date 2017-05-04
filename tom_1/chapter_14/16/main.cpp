#include <iostream>
#include <fstream>

class FName2 : public std::ifstream{
public:
	FName2(): named_( false) {}
	FName2( const std::string& fname):
		std::ifstream( fname.c_str()), fileName_( fname), named_( true) {}

	std::string name() const { return fileName_; }

	void name( const std::string& newName)
	{
		if( named_)
			return;

		fileName_ = newName;
		named_ = true;
	}

private:
	std::string fileName_;
	bool named_;
};

int main()
{
	FName2 file( "main.cpp");
	std::cout << "is_open: " << file.is_open() << std::endl;
	std::cout << "name: " << file.name() << std::endl;
	std::string s;
	while( getline( file, s))
	{
		std::cout << s << std::endl;
	}

	file.seekg( -200, std::ios::end);
	file.close();
	std::cout << "is_open: " << file.is_open() << std::endl;
}
