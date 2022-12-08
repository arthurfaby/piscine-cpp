#ifndef FORM_HPP
# define FORM_HPP

# include <ostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

protected:
	const std::string	name;
	bool				is_signed;
	unsigned int		grade_to_sign;
	unsigned int		grade_to_exec;

	class GradeTooHighException : public std::exception
	{
	public:
		const char*	what( void ) const throw()
		{
			return ( "Form::GradeTooHighException" );
		}
		~GradeTooHighException( void ) throw () {}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char*	what( void ) const throw()
		{
			return ( "Form::GradeTooLowException" );
		}
		~GradeTooLowException( void ) throw () {}
	};

public:
	Form( const std::string _name, unsigned int _grade_to_sign, unsigned int _grade_to_exec );
	Form( const Form& c);
	Form& operator=( const Form& c );
	virtual ~Form( void );

	virtual void	beSigned( const Bureaucrat& bc ) = 0;

	const std::string	getName( void ) const;
	bool				isSigned( void ) const;
	unsigned int		getGradeToSign( void ) const;
	unsigned int		getGradeToExec( void ) const;
};

std::ostream&	operator<<( std::ostream& os, const Form& form );

#endif
