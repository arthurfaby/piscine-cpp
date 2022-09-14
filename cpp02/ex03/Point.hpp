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
