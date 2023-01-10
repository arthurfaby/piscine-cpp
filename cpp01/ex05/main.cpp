#include "Harl.hpp"

int main( void )
{
	Harl	harl;

	harl.complain("test2");
	harl.complain("DEBUG");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("test1");
}
