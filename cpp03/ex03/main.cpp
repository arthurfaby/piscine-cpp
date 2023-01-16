#include "DiamondTrap.hpp"

int	main( void )
{
	std::cout << std::endl << " ########## Default constructor. ##########" << std::endl;  
	{
		DiamondTrap dt;
	
		dt.attack("A");
		dt.attack("B");
		dt.attack("C");
		dt.takeDamage(5);
		dt.takeDamage(4);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.attack("Hortense");
		dt.takeDamage(150);
		dt.beRepaired(1);
		dt.attack("Hortense");
		dt.highFiveGuys();
		dt.whoAmI();
	}
	std::cout << std::endl << " ########## Name constructor. ##########" << std::endl;  
	{
		DiamondTrap dt("Polo");
	
		dt.attack("A");
		dt.attack("B");
		dt.attack("C");
		dt.takeDamage(5);
		dt.takeDamage(4);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.attack("Hortense");
		dt.takeDamage(150);
		dt.beRepaired(1);
		dt.attack("Hortense");
		dt.highFiveGuys();
		dt.whoAmI();
	}
	std::cout << std::endl << " ########## Copy constructor. ##########" << std::endl;  
	{
		DiamondTrap	tmp("Polo");
		DiamondTrap	dt(tmp);

		dt.attack("A");
		dt.attack("B");
		dt.attack("C");
		dt.takeDamage(5);
		dt.takeDamage(4);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.attack("Hortense");
		dt.takeDamage(150);
		dt.beRepaired(1);
		dt.attack("Hortense");
		dt.highFiveGuys();
		dt.whoAmI();
	}
	std::cout << std::endl << " ########## Copy assignement operator ##########" << std::endl;  
	{
		DiamondTrap	tmp("Polo");
		DiamondTrap	dt;

		dt = tmp;
		dt.attack("A");
		dt.attack("B");
		dt.attack("C");
		dt.takeDamage(5);
		dt.takeDamage(4);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.beRepaired(1);
		dt.attack("Hortense");
		dt.takeDamage(150);
		dt.beRepaired(1);
		dt.attack("Hortense");
		dt.highFiveGuys();
		dt.whoAmI();
	}
	return (0);
}
