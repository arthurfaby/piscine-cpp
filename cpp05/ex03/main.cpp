#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	std::cout << "----- ShrubberyCreationForm -----" << std::endl;
	{
		Bureaucrat	b("Eduardo", 140);
		Intern		intern;
		AForm		*scf;

		scf = intern.makeForm("ShrubberyCreationForm", "home");
		if (scf)
		{
			try {
				b.signForm(*scf);
			}
			catch (std::exception & e) {
				std::cerr << "[\e[36mBureaucrat : " << b.getName()
					<< "\e[39m] couldn't sign " << "[\e[35mAForm : "
					<< scf->getName() << "\e[39m] because of : [\e[31m"
					<< e.what() << "\e[0m]" << std::endl; 
			};
			try {
				b.executeForm(*scf);
			}
			catch (std::exception & e) {
				std::cerr << "[\e[36mBureaucrat : " << b.getName()
					<< "\e[39m] couldn't execute " << "[\e[35mAForm : "
					<< scf->getName() << "\e[39m] because of : [\e[31m"
					<< e.what() << "\e[0m]" << std::endl; 
			};
	
		}
	}

	std::cout << std::endl << "----- RobotomyRequestForm -----" << std::endl;
	{
		Bureaucrat	b("Madeleine", 149);
		Intern		intern;
		AForm		*rrf;

		rrf = intern.makeForm("RobotomyRequestForm", "Gabrielle");
		if (rrf)
		{
			try {
				b.signForm(*rrf);
			}
			catch (std::exception & e) {
				std::cerr << "[\e[36mBureaucrat : " << b.getName()
					<< "\e[39m] couldn't sign " << "[\e[35mAForm : "
					<< rrf->getName() << "\e[39m] because of : [\e[31m"
					<< e.what() << "\e[0m]" << std::endl; 
			};
			try {
				b.executeForm(*rrf);
			}
			catch (std::exception & e) {
				std::cerr << "[\e[36mBureaucrat : " << b.getName()
					<< "\e[39m] couldn't execute " << "[\e[35mAForm : "
					<< rrf->getName() << "\e[39m] because of : [\e[31m"
					<< e.what() << "\e[0m]" << std::endl; 
			};
	
		}
	}

	std::cout << std::endl <<  "----- PresidentialPardonForm -----" << std::endl;
	{
		Bureaucrat	b("Vladislav", 20);
		Intern		intern;
		AForm		*scf;

		scf = intern.makeForm("PresidentialPardonForm", "home");
		if (scf)
		{
			try {
				b.signForm(*scf);
			}
			catch (std::exception & e) {
				std::cerr << "[\e[36mBureaucrat : " << b.getName()
					<< "\e[39m] couldn't sign " << "[\e[35mAForm : "
					<< scf->getName() << "\e[39m] because of : [\e[31m"
					<< e.what() << "\e[0m]" << std::endl; 
			};
			try {
				b.executeForm(*scf);
			}
			catch (std::exception & e) {
				std::cerr << "[\e[36mBureaucrat : " << b.getName()
					<< "\e[39m] couldn't execute " << "[\e[35mAForm : "
					<< scf->getName() << "\e[39m] because of : [\e[31m"
					<< e.what() << "\e[0m]" << std::endl; 
			};
	
		}
	}

	return (0);
}
