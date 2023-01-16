#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <ostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{

private:
	const std::string	name;
	unsigned int		grade;

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
		~GradeTooLowException( void ) throw();
	};

public:
	Bureaucrat( std::string _name, unsigned int _grade );
	Bureaucrat( const Bureaucrat& c);
	Bureaucrat& operator=( const Bureaucrat& c );
	~Bureaucrat( void );

	std::string		getName( void ) const;
	unsigned int	getGrade( void ) const;

	void			increment( void );
	void			decrement( void );
	void			signForm( AForm& form ) const;
	void			executeForm( AForm & form ) const;

};

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& c );

#endif
