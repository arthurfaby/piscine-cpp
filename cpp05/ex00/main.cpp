#include <iostream>
#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat	a("John", 148);
	Bureaucrat	d(a);
	Bureaucrat	e("Operator", 12);
	Bureaucrat	b("Sylvia", 3);
	try {
		Bureaucrat	c("Rodrigo", 152);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat	c("Rodriga", 0);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	e = d;
	
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	try {
		b.decrement();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		b.decrement();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

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
	std::cout << b << std::endl;

	try {
		a.decrement();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		a.decrement();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		a.decrement();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << a << std::endl;
	return (0);
}
