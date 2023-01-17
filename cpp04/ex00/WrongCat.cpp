#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] Default constructor called." << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat& c ) : WrongAnimal(c)
{
	std::cout << "[WrongCat] Copy constructor called." << std::endl;
	*this = c;
	return ;
}

WrongCat& WrongCat::operator=( const WrongCat& c )
{
	std::cout << "[WrongCat] Copy assignment operator called." << std::endl;
	this->type = c.getType();
	return *this;
}

WrongCat::~WrongCat( void )
{
	std::cout << "[WrongCat] Destructor called." << std::endl;
	return ;
}

void	WrongCat::makeSound ( void ) const
{
	std::cout << "Miaou !" << std::endl;
	return ; 
}
