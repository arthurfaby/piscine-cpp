#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "[ScavTrap] Default constructor called." << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage	= 20;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "[ScavTrap] Name constructor called." << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage	= 20;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap& c ) : ClapTrap(c)
{
	(void)c;
	std::cout << "[ScavTrap] Copy constructor called." << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& c )
{
	(void)c;
	std::cout << "[ScavTrap] Copy assignment operator called." << std::endl;
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "[ScavTrap] Destructor called." << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target 
			<< ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " is really tired and can't attack." << std::endl; 
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " entered Gate keeper mode." << std::endl;
}