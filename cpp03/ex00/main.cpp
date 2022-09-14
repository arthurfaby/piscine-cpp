#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap ct("Polo");

	ct.attack("A");
	ct.attack("B");
	ct.attack("C");
	ct.takeDamage(5);
	ct.takeDamage(4);
	ct.beRepaired(1);
	ct.beRepaired(1);
	ct.beRepaired(1);
	ct.beRepaired(1);
	ct.beRepaired(1);
	ct.beRepaired(1);
	ct.attack("Hortense");
	ct.takeDamage(50);
	return (0);
}
