#include "ScavTrap.hpp"

int	main( void )
{
	std::cout << std::endl << " ########## Default construstor ##########" << std::endl;  
	{
		ScavTrap st;
	
		st.attack("A");
		st.attack("B");
		st.attack("C");
		st.takeDamage(5);
		st.takeDamage(4);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.attack("Hortense");
		st.takeDamage(50);
		st.guardGate();
	}
	std::cout << std::endl << " ########## Name construstor ##########" << std::endl;  
	{
		ScavTrap st("Polo");
	
		st.attack("A");
		st.attack("B");
		st.attack("C");
		st.takeDamage(5);
		st.takeDamage(4);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.attack("Hortense");
		st.takeDamage(50);
		st.guardGate();
	}
	std::cout << std::endl << " ########## Copy construstor ##########" << std::endl;  
	{
		ScavTrap	tmp("Polo");
		ScavTrap	st(tmp);

		st.attack("A");
		st.attack("B");
		st.attack("C");
		st.takeDamage(5);
		st.takeDamage(4);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.attack("Hortense");
		st.takeDamage(50);
		st.guardGate();
	}
	std::cout << std::endl << " ########## Copy assignement operator ##########" << std::endl;  
	{
		ScavTrap	tmp("Polo");
		ScavTrap	st;

		st = tmp;
		st.attack("A");
		st.attack("B");
		st.attack("C");
		st.takeDamage(5);
		st.takeDamage(4);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.beRepaired(1);
		st.attack("Hortense");
		st.takeDamage(50);
		st.guardGate();
	}
	return (0);
}
