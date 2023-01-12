#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
	name("DefaultName"),
	hit_points(10),
	energy_points(10),
	attack_damage(0)
{
	std::cout << "[ClapTrap] Default constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string _name ) :
	name(_name),
	hit_points(10),
	energy_points(10),
	attack_damage(0)
{
	std::cout << "[ClapTrap] Name constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap& c ) :
	name(c.name),
	hit_points(c.hit_points),
	energy_points(c.energy_points),
	attack_damage(c.attack_damage)
{
	return ;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& c )
{
	this->name = c.name;
	this->hit_points = c.hit_points;
	this->energy_points = c.energy_points;
	this->attack_damage = c.attack_damage;
	return *this;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "[ClapTrap] Destructor called." << std::endl;
	return ;
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->energy_points > 0)
	{
		std::cout << "[ClapTrap method] " << this->name << " attacks " << target 
			<< ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
	{
		std::cout << "[ClapTrap method] " << this->name << " is really tired and can't attack." << std::endl; 
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->hit_points -= amount;
	std::cout << "[ClapTrap method] " << this->name << " took " << amount << " damage points." << std::endl;
	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << "[ClapTrap method] " << this->name << " is now with Daddy Johnny..." << std::endl; 
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->energy_points > 0)
	{
		std::cout << "[ClapTrap method] " << this->name << " won " << amount << " hit points." << std::endl;
		this->energy_points--;
		this->hit_points += amount;
	}
	else
	{
		std::cout << "[ClapTrap method] " << this->name << " is really tired and can't repaire." << std::endl; 
	}

}
