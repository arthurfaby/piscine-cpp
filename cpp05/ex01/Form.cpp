#include <iostream>
#include "Form.hpp"

Form::Form( const std::string _name, unsigned int _grade_to_sign, unsigned int _grade_to_exec) :
	name(_name),
	grade_to_sign(_grade_to_sign),
	grade_to_exec(_grade_to_exec)
{
	is_signed = 0;
	std::cout << "[\e[35mForm\e[39m] Default constructor called." << std::endl;
	return ;
}

Form::Form( const Form& c ) :
	name(c.getName()),
	grade_to_sign(c.getGradeToSign()),
	grade_to_exec(c.getGradeToExec())
{
	std::cout << "[\e[35mForm\e[39m] Copy constructor called." << std::endl;
	this->is_signed = c.isSigned();
	return ;
}

Form& Form::operator=( const Form& c )
{
	std::cout << "[\e[35mForm\e[39m] Copy assignment operator called." << std::endl;
	std::cout << "Can't copy name, grade_to_sign and grade_to_exec because they are constants." << std::endl;
	this->is_signed = c.isSigned();
	return *this;
}

Form::~Form( void )
{
	std::cout << "[\e[35mForm\e[39m] Destructor called." << std::endl;
	return ;
}

std::ostream&	operator<<( std::ostream& os, const Form& form )
{
	os << "---------- [\e[35mForm : " << form.getName() << "\e[39m] ----------" << std::endl;
	if (form.isSigned())
		os << "| -> The form is signed." << std::endl;
	else
		os << "| -> The form is not signed." << std::endl;
	os << "| -> Grade to sign : " << form.getGradeToSign() << std::endl;
	os << "| -> Grade to exec : " << form.getGradeToExec() << std::endl;	
	return (os); 
}

const std::string	Form::getName( void ) const
{
	return (name);
}

bool	Form::isSigned( void ) const
{
	return (is_signed);
}

unsigned int	Form::getGradeToSign( void ) const
{
	return (grade_to_sign);
}

unsigned int	Form::getGradeToExec( void ) const
{
	return (grade_to_exec);
}
	
void	Form::beSigned( const Bureaucrat& bc )
{
	try {
		if ( bc.getGrade() > this->grade_to_sign )
			throw GradeTooLowException();
		is_signed = 1;
		std::cout << "[\e[36mBureaucrat : " << bc.getName() << "\e[39m] signed " <<  "[\e[35mForm : " << this->getName() << "\e[39m]." << std::endl; 
	}
	catch ( std::exception& e )
	{
		std::cerr << "[\e[36mBureaucrat : " << bc.getName() << "\e[39m] couldn't sign " << "[\e[35mForm : " << this->getName() << "\e[39m] because of : [" << e.what() << "]" << std::endl; 
	}
}

const char*	Form::GradeTooHighException::what( void ) const throw()
{
	 return ("Form::GradeTooHighException");
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return ("Form::GradeTooLowException");
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw()
{
	return ;
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw()
{
	return ;
}
