#ifndef FORM_HPP
# define FORM_HPP

# include <ostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
	const std::string	name;
	bool				is_signed;
	const unsigned int		grade_to_sign;
	const unsigned int		grade_to_exec;

	class GradeTooHighException : public std::exception
	{
	public:
		const char*	what( void ) const throw();
		~GradeTooHighException( void ) throw ();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char*	what( void ) const throw();
		~GradeTooLowException( void ) throw ();
	};

public:
	Form( const std::string _name, unsigned int _grade_to_sign, unsigned int _grade_to_exec );
	Form( const Form& c);
	Form& operator=( const Form& c );
	~Form( void );

	void	beSigned( const Bureaucrat& bc );

	const std::string	getName( void ) const;
	bool				isSigned( void ) const;
	unsigned int		getGradeToSign( void ) const;
	unsigned int		getGradeToExec( void ) const;
};

std::ostream&	operator<<( std::ostream& os, const Form& form );

#endif
