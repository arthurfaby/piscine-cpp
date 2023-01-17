/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:41:21 by afaby             #+#    #+#             */
/*   Updated: 2023/01/17 16:04:33 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void )
{
	std::cout << "[\e[33mIntern\e[39m] Default constructor called." << std::endl;
	this->forms[0] = "ShrubberyCreationForm";
	this->forms[1] = "RobotomyRequestForm";
	this->forms[2] = "PresidentialPardonForm";
}

Intern::Intern( const Intern& c )
{
	std::cout << "[\e[33mIntern\e[39m] Copy constructor called." << std::endl;
	for (int i = 0; i < 3; i++)
		this->forms[i] = c.forms[i];
}

Intern&	Intern::operator=( const Intern& c )
{
	std::cout << "[\e[33mIntern\e[39m] Copy assignment operator called." << std::endl;
	for (int i = 0; i < 3; i++)
		this->forms[i] = c.forms[i];
	return *this;
}

Intern::~Intern( void )
{
	std::cout << "[\e[33mIntern\e[39m] Destructor called." << std::endl;
}

AForm	*Intern::makeForm( std::string form_name, std::string target )
{
	int	index(-1);

	for (int i = 0; i < 3; i++)
	{
		if (this->forms[i] == form_name)
			index = i;
	}
	if (index == -1)
	{
		std::cerr << form_name << " is not an existing form." << std::endl;
		return (NULL);
	}
	else
	{
		switch (index)
		{
			case 0:
				return (new ShrubberyCreationForm(target));
			case 1:
				return (new RobotomyRequestForm(target));
			case 2:
				return (new PresidentialPardonForm(target));
			default:
				return (NULL);
				
		}
	}
}
