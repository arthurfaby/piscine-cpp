/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:41:21 by afaby             #+#    #+#             */
/*   Updated: 2023/01/13 16:53:49 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void )
{
	this->forms[0] = "ShrubberyCreationForm";
	this->forms[1] = "RobotomyRequestForm";
	this->forms[2] = "PresidentialPardonForm";
	return ;
}

Intern::Intern( const Intern& c )
{
	for (int i = 0; i < 3; i++)
		this->forms[i] = c.forms[i];
	return ;
}

Intern&	Intern::operator=( const Intern& c )
{
	for (int i = 0; i < 3; i++)
		this->forms[i] = c.forms[i];
	return *this;
}

Intern::~Intern( void )
{
	return ;
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
