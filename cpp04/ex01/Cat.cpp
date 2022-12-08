#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "[Cat] Default constructor called." << std::endl;
	brain = new Brain();
	return ;
}

Cat::Cat( const Cat& c ) : Animal(c)
{
	std::cout << "[Cat] Copy constructor called." << std::endl;
	brain = new Brain( *(c.brain) );
	return ;
}

Cat& Cat::operator=( const Cat& c )
{
	std::cout << "[Cat] Copy assignment operator called." << std::endl;
	brain = new Brain( *(c.brain) );
	return *this;
}

Cat::~Cat( void )
{
	std::cout << "[Cat] Destructor called." << std::endl;
	delete brain;
	return ;
}

void	Cat::makeSound ( void ) const
{
	std::cout << "Miaou !" << std::endl;
	return ; 
}
