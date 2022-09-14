#include <iostream>
#include "Point.hpp"

Point::Point( void ) : x(Fixed(0)), y(Fixed(0))
{
	return ;
}

Point::Point( const Point& c) : x(c.x), y(c.y)
{
	return ;
}

Point::Point( const float _x, const float _y ) : x(_x), y(_y)
{
	return ;
}

Point& Point::operator=( const Point& c )
{
	( void ) c;
	return *this;
}

Point::~Point( void )
{
	return ;
}

const Fixed&	Point::getX( void )
{
	return (this->x);
}

const Fixed&	Point::getY( void )
{
	return (this->y);
}
