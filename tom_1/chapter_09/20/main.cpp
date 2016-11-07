#include <iostream>
#include "require.h"
#include <boost/lexical_cast.hpp>

int main( int argc, char* argv[])
{
	requireArgs( argc, 2);

	int num = boost::lexical_cast<int>(argv[ 1]);
	require( num >= 5 and num <= 10);

	std::string filePath = argv[ 2];
	std::ifstream in( filePath.c_str());
	assure( in, filePath);
}
