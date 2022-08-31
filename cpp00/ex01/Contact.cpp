/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:21:17 by afaby             #+#    #+#             */
/*   Updated: 2022/08/04 18:33:34 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Contact::Contact( void )
{
	this->first_name = "";
	this->last_name = "";
	this->nick_name = "";
	this->phone_number = "";
	this->darkest_secret = "";
	return ;
}

Contact::~Contact( void )
{
	return ;
}

std::string	Contact::getFirstName( void )
{
	return (this->first_name);
}

std::string	Contact::getLastName( void )
{
	return (this->last_name);
}

std::string	Contact::getNickName( void )
{
	return (this->nick_name);
}

std::string	Contact::getPhoneNumber( void )
{
	return (this->phone_number);
}

std::string	Contact::getDarkestSecret( void )
{
	return (this->darkest_secret);
}

void	Contact::setFirstName( std::string f_name )
{
	this->first_name = f_name;
}

void	Contact::setLastName( std::string l_name )
{
	this->last_name = l_name;
}

void	Contact::setNickName( std::string n_name )
{
	this->nick_name = n_name;
}

void	Contact::setPhoneNumber( std::string p_number )
{
	this->phone_number = p_number;
}

void	Contact::setDarkestSecret( std::string d_secret )
{
	this->darkest_secret = d_secret;
}

void	Contact::show( void )
{
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nick name : " << this->nick_name << std::endl;
	std::cout << "Phone Number : " << this->phone_number << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
}

void	Contact::overview( int index )
{
	std::cout << "     " << index << "    " << "|";
	print_block(this->first_name);
	std::cout << "|";
	print_block(this->last_name);
	std::cout << "|";
	print_block(this->nick_name);
	std::cout << std::endl;
}
