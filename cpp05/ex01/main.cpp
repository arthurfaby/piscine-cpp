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

	std::cout << "\e[36m---------- FORMS ----------\e[0m" << std::endl;
	{
		Form		form("FormTest", 100, 120);
		Form		form_cpy(form);
		Form		*form_assign = new Form("youhou", 1, 5);

		*form_assign = form_cpy;
		std::cout << form;
		std::cout << form_cpy;
		std::cout << *form_assign;
	
		c.signForm(form);
		a.signForm(form);
		b.signForm(form);

		c.signForm(form_cpy);
		a.signForm(form_cpy);
		b.signForm(form_cpy);

		c.signForm(*form_assign);
		a.signForm(*form_assign);
		b.signForm(*form_assign);

		delete form_assign;
	}

	return (0);
}
