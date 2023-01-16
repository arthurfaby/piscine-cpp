/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:39:20 by afaby             #+#    #+#             */
/*   Updated: 2023/01/13 16:52:01 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Intern
{
public:
	Intern( void );
	Intern( const Intern & c );
	Intern&	operator=( const Intern & c );
	~Intern( void );

	AForm	*makeForm( std::string form_name, std::string target );

private:
	std::string	forms[3];

};
