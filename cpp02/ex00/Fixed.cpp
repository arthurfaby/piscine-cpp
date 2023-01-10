#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0)
{
	std::cout << "Default constructor called." << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& c)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = c;
	return ;
}

Fixed& Fixed::operator=( const Fixed& c )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = c.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
	return ;
}
