#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap ct("Polo");
	ScavTrap st = ScavTrap("Myreille");

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
	st.attack("Wilfried");
	st.takeDamage(50);
	st.guardGate();
	return (0);
}
