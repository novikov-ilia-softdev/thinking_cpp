#include <iostream>

int main()
{
	char c;
	while( 1){
		std::cout << "Main menu" << std::endl;
		std::cout << "l: left, r - right, q - quit" << std::endl;
		std::cin >> c;
		switch( c)
		{
			case 'l':
			{
				std::cout << "Left menu" << std::endl;
				std::cout << "select a or b" << std::endl;
				std::cin >> c;

				switch( c)
				{
					case 'a':
					{
						std::cout << "You chose a" << std::endl;
						continue;
					}
					case 'b':
					{
						std::cout << "You chose b" << std::endl;
						continue;
					}
					default:
					{
						std::cout << "unknown option" << std::endl;
						continue;
					}
				}
			}

			case 'r':
			{
				std::cout << "Right menu" << std::endl;
				std::cout << "select c or d" << std::endl;
				std::cin >> c;

				switch( c)
				{
					case 'c':
					{
						std::cout << "You chose c" << std::endl;
						continue;
					}
					case 'd':
					{
						std::cout << "You chose d" << std::endl;
						continue;
					}
					default:
					{
						std::cout << "unknown option" << std::endl;
						continue;
					}
				}
			}

			case 'q':
			{
				break;
			}

			default:
			{
				std::cout << "unknown option" << std::endl;
			}
		}

		if( c == 'q')
			break;

	}

	std::cout << "quitting menu..." << std::endl;

}
