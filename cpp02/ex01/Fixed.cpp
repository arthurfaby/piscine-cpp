#include <iostream>
#include <complex>
#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0)
{
	std::cout << "Default constructor called." << std::endl;
	return ;
}

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called." << std::endl;
	this->value = n << this->n_bits;
	return ;
}

Fixed::Fixed( const float n )
{
	std::cout << "Float constructor called." << std::endl;
	this->value = roundf(n * pow(2, this->n_bits));
	return ;
}

Fixed::Fixed( const Fixed& c)
{
	std::cout << "Copy constructor called." << std::endl;
	this->value = c.getRawBits();
	return ;
}

Fixed& Fixed::operator=( const Fixed& c )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = c.getRawBits();
	return *this;
}

std::ostream& operator<<( std::ostream& os, const Fixed& c )
{
	return (os << c.toFloat());
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

void	Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	float	res;

	res = this->value / pow(2, this->n_bits);
	return (res);
}

int	Fixed::toInt( void ) const
{
	int	res;

	res = this->value >> this->n_bits;
	return (res);
}
