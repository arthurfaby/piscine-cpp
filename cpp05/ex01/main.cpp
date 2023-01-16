#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat	a("John", 100);
	Bureaucrat	d(a);
	Bureaucrat	e = d;
	Bureaucrat	b("Sylvia", 3);
	Bureaucrat	c("Rodrigo", 149);
	Form		form("FormTest", 100, 120);

	try {
		Bureaucrat	notgood("notgood", 765);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	};

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	try {
		c.decrement();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	};

	std::cout << c << std::endl;

	try {
		c.decrement();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	};

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

	std::cout << form;

	c.signForm(form);
	a.signForm(form);
	b.signForm(form);

	return (0);
}
