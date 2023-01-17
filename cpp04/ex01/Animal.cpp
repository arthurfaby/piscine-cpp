#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ) : type("Animal")
{
	std::cout << "[Animal] Default constructor called." << std::endl;
	return ;
}

Animal::Animal( std::string _type ) : type(_type)
{
	std::cout << "[Animal] Name constructor called." << std::endl;
	return ;
}

Animal::Animal( const Animal& c )
{
	std::cout << "[Animal] Copy constructor called." << std::endl;
	*this = c;
	return ;
}

Animal& Animal::operator=( const Animal& c )
{
	std::cout << "[Animal] Copy assignment operator called." << std::endl;
	this->type = c.getType();
	return *this;
}

Animal::~Animal( void )
{
	std::cout << "[Animal] Destructor called." << std::endl;
	return ;
}

std::string	Animal::getType( void ) const
{
	return (type);
}

void	Animal::setType( std::string _type )
{
	type = _type;
	return ;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Random animal sound !" << std::endl;
	return ;
}

Brain	*Animal::getBrain( void ) const
{
	std::cerr << "Simple animal doesn't have a brain." << std::endl;
	return (NULL);
}
