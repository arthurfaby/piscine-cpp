/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:50:00 by afaby             #+#    #+#             */
/*   Updated: 2023/01/13 16:28:26 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include <ostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

protected:
	const std::string		name;
	bool					is_signed;
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

	class FormNotSigned : public std::exception
	{
	public:
		const char*	what( void ) const throw();
		~FormNotSigned( void ) throw();
	};

public:
	AForm( const std::string _name, unsigned int _grade_to_sign, unsigned int _grade_to_exec );
	AForm( const AForm& c);
	AForm& operator=( const AForm& c );
	virtual ~AForm( void );

	virtual void		executeAction( void ) = 0;
	void				beSigned( const Bureaucrat & bc );
	void				execute( const Bureaucrat & executor );

	const std::string	getName( void ) const;
	bool				isSigned( void ) const;
	unsigned int		getGradeToSign( void ) const;
	unsigned int		getGradeToExec( void ) const;
};

std::ostream&	operator<<( std::ostream& os, const AForm& form );

#endif
