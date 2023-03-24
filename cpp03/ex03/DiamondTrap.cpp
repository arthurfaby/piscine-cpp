#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) :
	ClapTrap("DefaultName_clap_name"),
	FragTrap("DefaultName"),
	ScavTrap("DefaultName")
{
	this->name = "DefaultName";
	std::cout << "[DiamondTrap] Default constructor called." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string _name ) :	
	ClapTrap(_name + "_clap_name"),
	FragTrap(_name),
	ScavTrap(_name)
{
	std::cout << "[DiamondTrap] Name constructor called." << std::endl;
	name = _name;
	hit_points = 100;	//FragTrap::hit_points;
	energy_points = 50; //ScavTrap::energy_points;
	attack_damage = 30; //FragTrap::attack_damage;
	return ;	
}

DiamondTrap::DiamondTrap( const DiamondTrap& c ) :
	ClapTrap(c),
	FragTrap(c),
	ScavTrap(c)
{
	this->name = c.name;
	this->hit_points = c.hit_points;
	this->energy_points = c.energy_points;
	this->attack_damage = c.attack_damage;
	std::cout << "[DiamondTrap] Copy constructor called." << std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& c )
{
	this->name = c.name;
	this->hit_points = c.hit_points;
	this->energy_points = c.energy_points;
	this->attack_damage = c.attack_damage;
	std::cout << "[DiamondTrap] Copy assignment operator called." << std::endl;
	std::cout << "--> Can't copy the clap name." << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "[DiamondTrap] Destructor called." << std::endl;
	return ;
}

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "[DiamondTrap method] " << "ClapTrap name : " << ClapTrap::name << ", name : " << name << std::endl;
	return ;
}
