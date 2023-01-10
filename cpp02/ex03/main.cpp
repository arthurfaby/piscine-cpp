#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

int main( void )
{
	const Point 	a(0, 0);
	const Point	b(2, 0);
	const Point	c(0, 30);
	const Point	test(0.0005f, 29.99f);

	if (bsp(a, b, c, test))
		std::cout << "The test point is inside of ABC." << std::endl;
	else
		std::cout << "The test point is not inside of ABC." << std::endl; 
	return (0);
}
