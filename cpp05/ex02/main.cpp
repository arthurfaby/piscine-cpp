#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	std::cout << "----- Bureaucrat -----" << std::endl;
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
	}
	std::cout << std::endl << "----- ShrubberyCreationForm -----" << std::endl;
	{
		Bureaucrat	b("Eduardo", 140);
		ShrubberyCreationForm	scf("home");

		try {
			b.signForm(scf);
		}
		catch (std::exception & e) {
			std::cerr << "[\e[36mBureaucrat : " << b.getName()
				<< "\e[39m] couldn't sign " << "[\e[35mAForm : "
				<< scf.getName() << "\e[39m] because of : [\e[31m"
				<< e.what() << "\e[0m]" << std::endl; 
		};
		try {
			b.executeForm(scf);
		}
		catch (std::exception & e) {
			std::cerr << "[\e[36mBureaucrat : " << b.getName()
				<< "\e[39m] couldn't execute " << "[\e[35mAForm : "
				<< scf.getName() << "\e[39m] because of : [\e[31m"
				<< e.what() << "\e[0m]" << std::endl; 
		};
	}

	std::cout << std::endl << "----- RobotomyRequestForm -----" << std::endl;
	{
		Bureaucrat	b("Madeleine", 149);
		RobotomyRequestForm	rrf("Gabrielle");

		try {
			b.signForm(rrf);
		}
		catch (std::exception & e) {
			std::cerr << "[\e[36mBureaucrat : " << b.getName()
				<< "\e[39m] couldn't sign " << "[\e[35mAForm : "
				<< rrf.getName() << "\e[39m] because of : [\e[31m"
				<< e.what() << "\e[0m]" << std::endl; 
		};
		try {
			b.executeForm(rrf);
		}
		catch (std::exception & e) {
			std::cerr << "[\e[36mBureaucrat : " << b.getName()
				<< "\e[39m] couldn't execute " << "[\e[35mAForm : "
				<< rrf.getName() << "\e[39m] because of : [\e[31m"
				<< e.what() << "\e[0m]" << std::endl; 
		};
	}

	std::cout << std::endl <<  "----- PresidentialPardonForm -----" << std::endl;
	{
		Bureaucrat	b("Vladislav", 20);
		PresidentialPardonForm	ppf("Keenv");

		try {
			b.signForm(ppf);
		}
		catch (std::exception & e) {
			std::cerr << "[\e[36mBureaucrat : " << b.getName()
				<< "\e[39m] couldn't sign " << "[\e[35mAForm : "
				<< ppf.getName() << "\e[39m] because of : [\e[31m"
				<< e.what() << "\e[0m]" << std::endl; 
		};
		try {
			b.executeForm(ppf);
		}
		catch (std::exception & e) {
			std::cerr << "[\e[36mBureaucrat : " << b.getName()
				<< "\e[39m] couldn't execute " << "[\e[35mAForm : "
				<< ppf.getName() << "\e[39m] because of : [\e[31m"
				<< e.what() << "\e[0m]" << std::endl; 
		};
	}

	return (0);
}
