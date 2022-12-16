/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:52:36 by afaby             #+#    #+#             */
/*   Updated: 2022/12/16 14:11:47 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	print_block( std::string str )
{
	int	size;
	int	i;

	size = str.length();
	i = -1;
	if (size < 10)
	{
		while (++i < 10 - size)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
}

void	createContact( PhoneBook *phonebook )
{
	std::string	first_name("");
	std::string	last_name("");
	std::string	nick_name("");
	std::string phone_number("");
	std::string darkest_secret("");

	do {
		std::cout << "First name : ";
		std::getline( std::cin, first_name );
	} while (std::cin && first_name.empty());
	do {
		std::cout << "Last name : ";
		std::getline( std::cin, last_name );
	} while (std::cin && last_name.empty());
	do {
		std::cout << "Nick name : ";
		std::getline( std::cin, nick_name );
	} while (std::cin && nick_name.empty());
	do {
		std::cout << "Phone number : ";
		std::getline( std::cin, phone_number );
	} while (std::cin && phone_number.empty());
	do {
		std::cout << "Darkest secret : ";
		std::getline( std::cin, darkest_secret );
	} while (std::cin && darkest_secret.empty());
	phonebook->addContact( first_name, last_name, nick_name, phone_number, darkest_secret);
}

int	main(void)
{
	PhoneBook 	phonebook;
	std::string	input;

	while (std::cin)
	{
		do {
			std::cout << "Enter a command : (ADD, SEARCH, EXIT)" << std::endl;
			std::getline( std::cin, input );
		} while (
			std::cin
			&& input.compare("ADD") != 0
			&& input.compare("SEARCH") != 0
			&& input.compare("EXIT") != 0
		);
		if (input.compare("ADD") == 0)
			createContact(&phonebook);
		else if (input.compare("SEARCH") == 0)
		{
			if (phonebook.getNContacts() > 0)
				phonebook.listContacts();
			else
				std::cerr << "ERROR: no contacts in phonebook." << std::endl;
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "See you soon !" << std::endl;
			return (0);
		}
	}
	return (1);
}
