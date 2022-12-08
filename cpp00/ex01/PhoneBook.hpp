/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:15:04 by afaby             #+#    #+#             */
/*   Updated: 2022/11/15 16:13:13 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{

private:
	Contact	contacts[8];
	int		n_contacts;

public:
	PhoneBook( void );
	~PhoneBook( void );
	void	addContact( 
		std::string f_name,
		std::string l_name,
		std::string n_name,
		std::string p_number,
		std::string d_secret
	);
	void	listContacts( void );
	int		getNContacts( void );	
};

#endif
