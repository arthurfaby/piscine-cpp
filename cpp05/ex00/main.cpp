#include <iostream>
#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat	a("John", 100);
	Bureaucrat	d(a);
	Bureaucrat	e("Operator", 12);
	Bureaucrat	b("Sylvia", 3);
	Bureaucrat	c("Rodrigo", 149);
	e = d;
	
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	try {
		c.decrement();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << c << std::endl;

	try {
		c.decrement();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << c << std::endl;
	
	try {
		b.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};
	try {
		b.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};

	std::cout << b << std::endl;

	try {
		b.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};
	try {
		b.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};

	std::cout << b << std::endl;

	try {
		c.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};
	try {
		c.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};
	try {
		c.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};
	try {
		c.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};

	std::cout << c << std::endl;

	try {
		c.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};
	try {
		c.increment();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};

	std::cout << c << std::endl;

	try {
		c.decrement();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};
	try {
		c.decrement();
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	};

	std::cout << c << std::endl;
	return (0);
}
