/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:51:48 by afaby             #+#    #+#             */
/*   Updated: 2022/08/04 18:33:51 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>


class Contact
{

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string phone_number;
	std::string	darkest_secret;
public:
	Contact( void );
	Contact( std::string f_name, std::string l_name, std::string n_name );
	~Contact( void );

	void	show( void );	
	void	overview( int index );	

	std::string	getFirstName( void );
	std::string	getLastName( void );
	std::string	getNickName( void );
	std::string	getPhoneNumber( void );
	std::string	getDarkestSecret( void );
	void		setFirstName( std::string f_name );
	void		setLastName( std::string l_name );
	void		setNickName( std::string n_name );
	void		setPhoneNumber( std::string p_number );
	void		setDarkestSecret( std::string d_secret );
};

#endif
