#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "[Dog] Default constructor called." << std::endl;
	brain = new Brain();
}

Dog::Dog( const Dog& c ) : Animal(c)
{
	std::cout << "[Dog] Copy constructor called." << std::endl;
	this->brain = NULL;
	*this = c;
}

Dog& Dog::operator=( const Dog& c )
{
	std::cout << "[Dog] Copy assignment operator called." << std::endl;
	this->type = c.getType();
	delete this->brain;
	this->brain = new Brain( *(c.brain) );
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "[Dog] Destructor called." << std::endl;
	delete this->brain;
}

void	Dog::makeSound ( void ) const
{
	std::cout << "Waf waf !" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}
