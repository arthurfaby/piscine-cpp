/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:53:05 by afaby             #+#    #+#             */
/*   Updated: 2023/01/10 16:53:11 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{

private:
	int					value;
	static const int	n_bits = 8;

public:

	// Orthodox Canonical Form
	Fixed( void );
	Fixed( const int n );
	Fixed( const float n );
	Fixed( const Fixed& c );
	Fixed& operator=( const Fixed& c );
	~Fixed( void );

	// Getter and setter
	int		getRawBits( void ) const;
	void	setRawBits( const int raw );
	
	// Conversion methods
	int		toInt( void ) const;
	float	toFloat( void ) const;
};

std::ostream& operator<<( std::ostream& os, const Fixed& c);

#endif
