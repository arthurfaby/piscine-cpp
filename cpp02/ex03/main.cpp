#include <iostream>
#include <stdlib.h>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int main( int argc, char **argv )
{
	const Point 	a(0, 0);
	const Point	b(0, 5);
	const Point	c(5, 0);
	const Point	test(atoi(argv[1]), atoi(argv[2]));

	(void)argc;

	if (bsp(a, b, c, test))
		std::cout << "The test point is inside of ABC." << std::endl;
	else
		std::cout << "The test point is not inside of ABC." << std::endl; 
}
