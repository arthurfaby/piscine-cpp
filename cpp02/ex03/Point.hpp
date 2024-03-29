/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:54:37 by afaby             #+#    #+#             */
/*   Updated: 2023/01/10 16:54:40 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{

private:
	const Fixed	x;
	const Fixed	y;

public:
	Point( void );
	Point( const Point& c );
	Point( const float x, const float y );
	Point& operator=(const Point& c);
	~Point( void );

	const Fixed&	getX( void );
	const Fixed&	getY( void );
};

#endif
