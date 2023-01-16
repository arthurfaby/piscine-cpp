#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string _name, unsigned int _grade ) : name(_name)
{
	std::cout << "[\e[36mBureaucrat\e[39m] Constructor called." << std::endl;
	try
	{
		if ( _grade < 1 )
			throw GradeTooHighException();
		else if ( _grade > 150 )
			throw GradeTooLowException();
		else
			grade = _grade;
	}
	catch ( const std::exception& e )
	{
		std::cerr << e.what() << std::endl;
		grade = 0;
	}
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& c )
{
	std::cout << "[\e[36mBureaucrat\e[39m] Copy constructor called." << std::endl;
	name = c.name;
	grade = c.grade;
	return ;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& c )
{
	std::cout << "[\e[36mBureaucrat\e[39m] Copy assignment operator called." << std::endl;
	name = c.name;
	grade = c.grade;
	return *this;
}

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& c )
{
	os << c.getName() << ", bureaucrat grade " << c.getGrade();
	return (os);
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "[\e[36mBureaucrat\e[39m] Destructor called." << std::endl;
	return ;
}

std::string	Bureaucrat::getName ( void ) const
{
	return (name);
}

unsigned int	Bureaucrat::getGrade( void ) const
{
	return (grade);
}

void		Bureaucrat::increment( void )
{
	grade--;
	std::cout << "Increment grade of " << name << std::endl;
	try {
		if ( grade < 1 )
			throw GradeTooHighException();
	}
	catch ( const std::exception& e )
	{
		std::cerr << e.what() << std::endl;
		grade = 1;
	}
}

void		Bureaucrat::decrement( void )
{
	grade++;
	std::cout << "Decrement grade of " << name << std::endl;
	try {
		if ( grade > 150 )
			throw GradeTooLowException();
	}
	catch ( const std::exception& e )
	{
		std::cerr << e.what() << std::endl;
		grade = 150;
	}
}

void	Bureaucrat::signForm( Form& form ) const
{
	if (form.isSigned())
		std::cerr << "[\e[36mBureaucrat : " << this->getName() << "\e[39m] couldn't sign " << "[\e[35mForm : " << form.getName() << "\e[39m] because it is already signed." << std::endl; 
	else
		form.beSigned(*this);
}
