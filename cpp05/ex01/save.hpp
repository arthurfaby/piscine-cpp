#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <ostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{

private:
	std::string		name;
	unsigned int	grade;

	class GradeTooHighException : public std::exception 
	{
	public:
		const char*	what( void ) const throw()
		{
			return ( "[\e[31mERROR\e[39m] Bureaucrat::GradeTooHighException" );
		}
		~GradeTooHighException( void ) throw () {}
	};

	class GradeTooLowException : public std::exception 
	{
	public:
		const char*	what( void ) const throw()
		{
			return ( "[\e[31mERROR\e[39m] Bureaucrat::GradeTooLowException" );
		}
		~GradeTooLowException( void ) throw() {}
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
	void			signForm( Form& form ) const;

};

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& c );

#endif
