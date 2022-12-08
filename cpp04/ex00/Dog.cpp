#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "[Dog] Default constructor called." << std::endl;
	return ;
}

Dog::Dog( const Dog& c ) : Animal(c)
{
	(void) c;
	std::cout << "[Dog] Copy constructor called." << std::endl;
	return ;
}

Dog& Dog::operator=( const Dog& c )
{
	(void) c;
	std::cout << "[Dog] Copy assignment operator called." << std::endl;
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "[Dog] Destructor called." << std::endl;
	return ;
}

void	Dog::makeSound ( void ) const
{
	std::cout << "Waf waf !" << std::endl;
	return ; 
}
