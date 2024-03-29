/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:14:59 by afaby             #+#    #+#             */
/*   Updated: 2022/12/16 17:19:32 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

PhoneBook::PhoneBook( void )
{
	this->n_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	return ;
}

void PhoneBook::addContact( std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string d_secret)
{
	this->contacts[this->n_contacts % 8].setFirstName(f_name);
	this->contacts[this->n_contacts % 8].setLastName(l_name);
	this->contacts[this->n_contacts % 8].setNickName(n_name);
	this->contacts[this->n_contacts % 8].setPhoneNumber(p_number);
	this->contacts[this->n_contacts % 8].setDarkestSecret(d_secret);
	this->n_contacts++;
}

void PhoneBook::listContacts( void )
{
	int			i;
	std::string	line;
	int			input;
	int			max_contact;

	i = -1;
	std::cout << "   index  | FirstName| LastName | NickName " << std::endl;
	if (this->n_contacts < 8)
	{
		max_contact = this->n_contacts;
		while (++i < this->n_contacts)
			this->contacts[i].overview(i);
	}
	else
	{
		max_contact = 8;
		while (++i < 8)
			this->contacts[i].overview(i);
	}
	std::cout << "Choose an index : ";
	std::getline( std::cin, line );
	input = std::atoi(line.c_str());
	while ( std::cin && !(isdigit(line.at(0)) && line.length() == 1 
			&& input >= 0 && input < max_contact))
	{
		std::cerr << "ERROR: invalid input." << std::endl;
		std::cout << "Choose an index : ";
		std::getline( std::cin, line );
		input = std::atoi(line.c_str());
	}
	this->contacts[input].show();
}

int	PhoneBook::getNContacts( void )
{
	return (this->n_contacts);
}
