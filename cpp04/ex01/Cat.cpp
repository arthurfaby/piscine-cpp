#include <iostream>
#include "Cat.hpp"
#include <cstdlib>

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "[Cat] Default constructor called." << std::endl;
	brain = new Brain();
}

Cat::Cat( const Cat& c ) : Animal(c)
{
	std::cout << "[Cat] Copy constructor called." << std::endl;
	this->type = c.getType();
	this->brain = new Brain( *(c.brain) );
}

Cat& Cat::operator=( const Cat& c )
{
	std::cout << "[Cat] Copy assignment operator called." << std::endl;
	this->type = c.getType();
	this->brain = new Brain( *(c.brain) );
	return *this;
}

Cat::~Cat( void )
{
	std::cout << "[Cat] Destructor called." << std::endl;
	delete brain;
}

void	Cat::makeSound ( void ) const
{
	std::cout << "Miaou !" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->brain);
}
