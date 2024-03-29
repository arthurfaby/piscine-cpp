#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) 
{
	std::cout << "[WrongAnimal] Default constructor called." << std::endl;
	this->type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal( std::string _type ) : type(_type)
{
	std::cout << "[WrongAnimal] Name constructor called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal& c )
{
	std::cout << "[WrongAnimal] Copy constructor called." << std::endl;
	*this = c;
	return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& c )
{
	std::cout << "[WrongAnimal] Copy assignment operator called." << std::endl;
	this->type = c.getType();
	return *this;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "[WrongAnimal] Destructor called." << std::endl;
	return ;
}

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}

void	WrongAnimal::setType( std::string _type )
{
	type = _type;
	return ;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Random wrong animal sound !" << std::endl;
	return ;
}
