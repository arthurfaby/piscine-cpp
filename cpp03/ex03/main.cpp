#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap ct("Polo");
	DiamondTrap st = DiamondTrap("Myreille");
	DiamondTrap ft = DiamondTrap("Philibert");

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
	ft.attack("Pilippe");
	ft.takeDamage(50);
	ft.highFiveGuys();
	ft.whoAmI();
	return (0);
}
