#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "[Dog] Default constructor called." << std::endl;
	brain = new Brain();
	return ;
}

Dog::Dog( const Dog& c ) : Animal(c)
{
	std::cout << "[Dog] Copy constructor called." << std::endl;
	brain = new Brain( *(c.brain) );
	return ;
}

Dog& Dog::operator=( const Dog& c )
{
	std::cout << "[Dog] Copy assignment operator called." << std::endl;
	brain = new Brain( *(c.brain) );
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "[Dog] Destructor called." << std::endl;
	delete brain;
	return ;
}

void	Dog::makeSound ( void ) const
{
	std::cout << "Waf waf !" << std::endl;
	return ; 
}

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}
