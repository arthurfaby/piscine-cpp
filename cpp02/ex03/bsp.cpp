#include "Point.hpp"
#include <iostream>
Fixed	absValue( Fixed x )
{
	if (x > Fixed(0))
		return (x);
	else
		return (x * Fixed(-1));
}

Fixed	getArea( Point A, Point B, Point C)
{
	Fixed	area;
	Fixed	i;
	Fixed	j;
	Fixed	k;

	i = A.getX() * (B.getY() - C.getY());
	j = B.getX() * (C.getY() - A.getY());
	k = C.getX() * (A.getY() - B.getY());

	return (absValue(i + j + k));
}

bool	bsp( const Point a, const Point b, const Point c, const Point point )
{
	Fixed	ABC_area;
	Fixed	ABP_area;
	Fixed	ACP_area;
	Fixed	BCP_area;
	Fixed	sum_area;

	ABC_area = getArea(a, b, c);
	ABP_area = getArea(a, b, point);
	ACP_area = getArea(a, c, point);
	BCP_area = getArea(b, c, point);
	sum_area = ABP_area + ACP_area + BCP_area;
	if (ABP_area == 0 || ACP_area == 0 || BCP_area == 0)
		return (0);
	if (ABC_area == sum_area)
		return (1);
	return (0);
}
