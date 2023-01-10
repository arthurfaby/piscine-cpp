#include <iostream>
#include <complex>
#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0)
{
//	std::cout << "Default constructor called." << std::endl;
	return ;
}

Fixed::Fixed( const int n )
{
//	std::cout << "Int constructor called." << std::endl;
	this->value = n * pow(2, this->n_bits);
	return ;
}

Fixed::Fixed( const float n )
{
//	std::cout << "Float constructor called." << std::endl;
	this->value = roundf(n * pow(2, this->n_bits));
	return ;
}

Fixed::Fixed( const Fixed& c)
{
//	std::cout << "Copy constructor called." << std::endl;
	*this = c;
	return ;
}

Fixed& Fixed::operator=( const Fixed& c )
{
//	std::cout << "Copy assignment operator called" << std::endl;
	this->value = c.getRawBits();
	return *this;
}

std::ostream& operator<<( std::ostream& os, const Fixed& c )
{
	return (os << c.toFloat());
}

bool	Fixed::operator>( const Fixed& other ) const
{
	return (this->value > other.value);
}

bool	Fixed::operator<( const Fixed& other ) const
{
	return (this->value < other.value);
}

bool	Fixed::operator>=( const Fixed& other ) const
{
	return (this->value >= other.value);
}

bool	Fixed::operator<=( const Fixed& other ) const
{
	return (this->value <= other.value);
}

bool	Fixed::operator==( const Fixed& other ) const
{
	return (this->value == other.value);
}

bool	Fixed::operator!=( const Fixed& other ) const
{
	return (this->value != other.value);
}

Fixed	Fixed::operator+( const Fixed& other ) const
{
	Fixed	new_fixed;

	new_fixed.value = this->value + other.value;
	return (new_fixed);
}

Fixed	Fixed::operator-( const Fixed& other ) const
{
	Fixed	new_fixed;

	new_fixed.value = this->value - other.value;
	return (new_fixed);
}

Fixed	Fixed::operator*( const Fixed& other ) const
{
	Fixed	new_fixed;
	float	res;
	
	res = this->toFloat() * other.toFloat();
	new_fixed.value = res * pow(2, this->n_bits);
	return (new_fixed);
}

Fixed	Fixed::operator/( const Fixed& other ) const
{
	Fixed	new_fixed;
	int		new_value;

	if (other.value == 0)
	{
		std::cerr << "Impossible operation (dividing by 0).";
		new_fixed.value = 0;
		return (new_fixed);
	}
	new_value = roundf((this->toFloat() / other.toFloat()) * pow(2, this->n_bits));
	new_fixed.value = new_value;
	return (new_fixed);
}

Fixed&	Fixed::operator++( void )
{
	this->value += 1;
	return (*this);
}

Fixed	Fixed::operator++( int n )
{
	Fixed	new_fixed = *this;

	if (n != 0)
		this->value += n;
	else
		this->value += 1;	
	return (new_fixed);
}

Fixed&	Fixed::operator--( void )
{
	this->value -= 1;
	return (*this);
}

Fixed	Fixed::operator--( int n )
{
	Fixed	new_fixed = *this;

	if (n != 0)
		this->value -= n;
	else
		this->value -= 1;
	return (new_fixed);
}

Fixed::~Fixed( void )
{
//	std::cout << "Destructor called." << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	return (this->value);
}

void	Fixed::setRawBits( const int raw )
{
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

Fixed&	Fixed::min( Fixed& a, Fixed& b )
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::min( const Fixed& a, const Fixed& b )
{
	if (a < b)
		return ((Fixed&)a);
	return ((Fixed&)b);
}

Fixed&	Fixed::max( Fixed& a, Fixed& b )
{
	if (a > b)
		return (a);
	return (b);
}

Fixed&	Fixed::max( const Fixed& a, const Fixed& b )
{
	if (a > b)
		return ((Fixed&)a);
	return ((Fixed&)b);
}
