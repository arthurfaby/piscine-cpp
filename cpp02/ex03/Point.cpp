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

Point::Point( const float _x, const float _y ) : x(Fixed(_x)), y(Fixed(_y))
{
	return ;
}

Point& Point::operator=( const Point& c )
{
	(void)c;
	std::cerr << "Can't copy x and y because they are constant." << std::endl;
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
