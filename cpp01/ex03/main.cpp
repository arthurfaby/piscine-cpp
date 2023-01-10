#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void )
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		Weapon club2 = Weapon("crowbar");
		HumanB jim("Jim");

		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.setWeapon(club2);
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
	}
}
