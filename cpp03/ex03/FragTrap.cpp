#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "[FragTrap] Default constructor called." << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage	= 30;
	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "[FragTrap] Name constructor called." << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage	= 30;
	return ;
}

FragTrap::FragTrap( const FragTrap& c ) : ClapTrap(c)
{
	std::cout << "[FragTrap] Copy constructor called." << std::endl;
	return ;
}

FragTrap& FragTrap::operator=( const FragTrap& c )
{
	this->name = c.name;
	this->hit_points = c.hit_points;
	this->energy_points = c.energy_points;
	this->attack_damage = c.attack_damage;
	std::cout << "[FragTrap] Copy assignment operator called." << std::endl;
	return *this;
}

FragTrap::~FragTrap( void )
{
	std::cout << "[FragTrap] Destructor called." << std::endl;
	return ;
}

void	FragTrap::highFiveGuys( void ) 
{
	std::cout << "[FragTrap method] " << this->name << " : \"Can someone hive five me ? :)\"" << std::endl;
}
