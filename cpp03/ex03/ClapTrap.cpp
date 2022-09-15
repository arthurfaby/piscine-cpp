#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "[ClapTrap] Default constructor called." << std::endl;
	this->name = "NoName";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap( std::string _name ) :
	name(_name)
{
	std::cout << "[ClapTrap] Name constructor called." << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap& c )
{
	( void ) c;
	return ;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& c )
{
	( void ) c;
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
		std::cout << "ClapTrap " << this->name << " attacks " << target 
			<< ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " is really tired and can't attack." << std::endl; 
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage points." << std::endl;
	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << "ClapTrap " << this->name << " is now with Daddy Johnny..." << std::endl; 
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " won " << amount << " hit points." << std::endl;
		this->energy_points--;
		this->hit_points += amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " is really tired and can't repaire." << std::endl; 
	}

}
