#include "FragTrap.hpp"

int	main( void )
{
	std::cout << std::endl << " ########## Default constructor ##########" << std::endl;  
	{
		FragTrap ft;
	
		ft.attack("A");
		ft.attack("B");
		ft.attack("C");
		ft.takeDamage(5);
		ft.takeDamage(4);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.attack("Hortense");
		ft.takeDamage(50);
		ft.highFiveGuys();
	}
	std::cout << std::endl << " ########## Name constructor ##########" << std::endl;  
	{
		FragTrap	ft("Polo");
	
		ft.attack("A");
		ft.attack("B");
		ft.attack("C");
		ft.takeDamage(5);
		ft.takeDamage(4);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.attack("Hortense");
		ft.takeDamage(50);
		ft.highFiveGuys();
	}
	std::cout << std::endl << " ########## Copy constructor ##########" << std::endl;  
	{
		FragTrap 	tmp("Polo");
		FragTrap	ft(tmp);

		ft.attack("A");
		ft.attack("B");
		ft.attack("C");
		ft.takeDamage(5);
		ft.takeDamage(4);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.attack("Hortense");
		ft.takeDamage(50);
	//	ft.highFiveGuys();
	}
	std::cout << std::endl << " ########## Copy assignement operator ##########" << std::endl;  
	{
		FragTrap	tmp("Polo");
		FragTrap	ft;

		ft = tmp;
		ft.attack("A");
		ft.attack("B");
		ft.attack("C");
		ft.takeDamage(5);
		ft.takeDamage(4);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.beRepaired(1);
		ft.attack("Hortense");
		ft.takeDamage(50);
		ft.highFiveGuys();
	}
	return (0);
}
