#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	AForm( "PresidentialPardonForm", 25, 5 ),
	_target("PresidentialPardonDefaultName")
{
	std::cout << "[\e[35mPresidentialPardonForm\e[39m] Default constructor called." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	AForm( "PresidentialPardonForm", 25, 5 ),
	_target(target)
{
	std::cout << "[\e[35mPresidentialPardonForm\e[39m] Default constructor called." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& c ) :
	AForm(c)
{
	std::cout << "[\e[35mPresidentialPardonForm\e[39m] Copy constructor called." << std::endl;
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& c )
{
	std::cout << "[\e[35mPresidentialPardonForm\e[39m] Copy assignment operator called." << std::endl;
	std::cout << "Can't copy name, grade_to_sign and grade_to_exec because they are constants." << std::endl;
	this->is_signed = c.isSigned();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "[\e[35mPresidentialPardonForm\e[39m] Destructor called." << std::endl;
	return ;
}

void PresidentialPardonForm::executeAction( void )
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
