#include "Harl.hpp"

int main( int argc, char **argv )
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " \"LEVEL\"" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
}
