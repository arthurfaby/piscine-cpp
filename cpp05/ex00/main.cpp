#include <iostream>
#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat	a("John", 100);
	Bureaucrat	b("Julio", 3);
	Bureaucrat	c("Juan", 148);
	Bureaucrat	d("Juanito", 0);
	Bureaucrat	e("Jose", 151);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	b.increment();
	b.increment();
	std::cout << b << std::endl;
	b.increment();
	b.increment();
	std::cout << b << std::endl;
	
	c.decrement();
	c.decrement();
	c.decrement();
	std::cout << c << std::endl;
	c.increment();
	c.increment();
	std::cout << c << std::endl;
	c.decrement();
	c.decrement();
	std::cout << c << std::endl;

	return (0);
}
