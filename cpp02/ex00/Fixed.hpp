/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:38:54 by afaby             #+#    #+#             */
/*   Updated: 2023/01/10 13:38:58 by afaby            ###   ########.fr       */
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
	Fixed(const Fixed& c);
	Fixed& operator=(const Fixed& c);
	~Fixed( void );

	// Getter and setter
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

#endif
