#include <iostream>
#include "AForm.hpp"

AForm::AForm( const std::string _name, unsigned int _grade_to_sign, unsigned int _grade_to_exec) :
	name(_name),
	grade_to_sign(_grade_to_sign),
	grade_to_exec(_grade_to_exec)
{
	is_signed = 0;
	std::cout << "[\e[35mAForm\e[39m] Default constructor called." << std::endl;
	return ;
}

AForm::AForm( const AForm& c ) :
	name(c.getName()),
	grade_to_sign(c.getGradeToSign()),
	grade_to_exec(c.getGradeToExec())
{
	std::cout << "[\e[35mAForm\e[39m] Copy constructor called." << std::endl;
	this->is_signed = c.isSigned();
	return ;
}

AForm& AForm::operator=( const AForm& c )
{
	std::cout << "[\e[35mAForm\e[39m] Copy assignment operator called." << std::endl;
	std::cout << "Can't copy name, grade_to_sign and grade_to_exec because they are constants." << std::endl;
	this->is_signed = c.isSigned();
	return *this;
}

AForm::~AForm( void )
{
	std::cout << "[\e[35mAForm\e[39m] Destructor called." << std::endl;
	return ;
}

std::ostream&	operator<<( std::ostream& os, const AForm& form )
{
	os << "---------- [\e[35mAForm : " << form.getName() << "\e[39m] ----------" << std::endl;
	if (form.isSigned())
		os << "| -> The form is signed." << std::endl;
	else
		os << "| -> The form is not signed." << std::endl;
	os << "| -> Grade to sign : " << form.getGradeToSign() << std::endl;
	os << "| -> Grade to exec : " << form.getGradeToExec() << std::endl;	
	return (os); 
}

const std::string	AForm::getName( void ) const
{
	return (name);
}

bool	AForm::isSigned( void ) const
{
	return (is_signed);
}

unsigned int	AForm::getGradeToSign( void ) const
{
	return (grade_to_sign);
}

unsigned int	AForm::getGradeToExec( void ) const
{
	return (grade_to_exec);
}
	
void	AForm::beSigned( const Bureaucrat& bc )
{
	if ( bc.getGrade() > this->grade_to_sign )
		throw GradeTooLowException();
	is_signed = 1;
	std::cout << "[\e[36mBureaucrat : " << bc.getName() << "\e[39m] signed " <<  "[\e[35mAForm : " << this->getName() << "\e[39m]." << std::endl; 
}

void	AForm::execute( const Bureaucrat & executor )
{
	if (!this->isSigned())
		throw FormNotSigned();
	if (executor.getGrade() > this->grade_to_exec)
		throw GradeTooLowException();
	this->executeAction();
}

const char*	AForm::GradeTooHighException::what( void ) const throw()
{
	 return ("AForm::GradeTooHighException");
}

const char*	AForm::GradeTooLowException::what( void ) const throw()
{
	return ("AForm::GradeTooLowException");
}

const char*	AForm::FormNotSigned::what( void ) const throw()
{
	return ("AForm::FormNotSigned");
}

AForm::GradeTooHighException::~GradeTooHighException( void ) throw()
{
	return ;
}

AForm::GradeTooLowException::~GradeTooLowException( void ) throw()
{
	return ;
}

AForm::FormNotSigned::~FormNotSigned( void ) throw()
{
	return ;
}
