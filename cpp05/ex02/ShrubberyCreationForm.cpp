#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "ShruberryForm", 145, 137 )
{
	std::cout << "[\e[36mShrubberyCreationForm\e[39m] Default constructor called." << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& c ) : Form(c)
{
	std::cout << "[\e[36mShrubberyCreationForm\e[39m] Copy constructor called." << std::endl;
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& c )
{
	std::cout << "[\e[36mShrubberyCreationForm\e[39m] Copy assignment operator called." << std::endl;
	name = c.name;
	grade_to_exec = c.grade_to_exec;
	grade_to_sign = c.grade_to_sign;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "[\e[36mShrubberyCreationForm\e[39m] Destructor called." << std::endl;
	return ;
}

void	ShrubberyCreationForm::beSigned( const Bureaucrat& bc )
{
	(void)bc;
	return ;
}
