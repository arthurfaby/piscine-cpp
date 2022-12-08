#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "[Cat] Default constructor called." << std::endl;
	return ;
}

Cat::Cat( const Cat& c ) : Animal(c)
{
	(void) c;
	std::cout << "[Cat] Copy constructor called." << std::endl;
	return ;
}

Cat& Cat::operator=( const Cat& c )
{
	(void) c;
	std::cout << "[Cat] Copy assignment operator called." << std::endl;
	return *this;
}

Cat::~Cat( void )
{
	std::cout << "[Cat] Destructor called." << std::endl;
	return ;
}

void	Cat::makeSound ( void ) const
{
	std::cout << "Miaou !" << std::endl;
	return ; 
}
