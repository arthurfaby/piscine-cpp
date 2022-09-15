#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "[DiamondTrap] Default constructor called." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string _name ) : ClapTrap(_name + "_clap_name"), FragTrap(_name), ScavTrap(_name)
{
	std::cout << "[DiamondTrap] Name constructor called." << std::endl;
	name = _name;
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	return ;	
}

DiamondTrap::DiamondTrap( const DiamondTrap& c ) : ClapTrap(c), FragTrap(c), ScavTrap(c)
{
	(void) c;
	std::cout << "[DiamondTrap] Copy constructor called." << std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& c )
{
	(void) c;
	std::cout << "[DiamondTrap] Copy assignment operator called." << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "[DiamondTrap] Destructor called." << std::endl;
	return ;
}

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "ClapTrap name : " << ClapTrap::name << ", name : " << name << std::endl;
	return ;
}
