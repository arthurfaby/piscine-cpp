#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	AForm( "RobotomyRequestForm", 72, 45 ),
	_target("RobotomyRequestDefaultName")
{
	std::cout << "[\e[35mRobotomyRequestForm\e[39m] Default constructor called." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	AForm( "RobotomyRequestForm", 72, 45 ),
	_target(target)
{
	std::cout << "[\e[35mRobotomyRequestForm\e[39m] Default constructor called." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& c ) : AForm(c)
{
	std::cout << "[\e[35mRobotomyRequestForm\e[39m] Copy constructor called." << std::endl;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& c )
{
	std::cout << "[\e[35mRobotomyRequestForm\e[39m] Copy assignment operator called." << std::endl;
	std::cout << "Can't copy name, grade_to_sign and grade_to_exec because they are constants." << std::endl;
	this->is_signed = c.isSigned();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "[\e[35mRobotomyRequestForm\e[39m] Destructor called." << std::endl;
	return ;
}

void RobotomyRequestForm::executeAction( void )
{
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized." << std::endl;
	else
		std::cout << this->_target << " has not been robotomized." << std::endl;
}
