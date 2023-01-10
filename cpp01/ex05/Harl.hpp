/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:17:06 by afaby             #+#    #+#             */
/*   Updated: 2023/01/10 10:17:15 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{

private:
	std::string	strings[4];
	void	(Harl::*funcs[4])( void );

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	Harl( void );
	~Harl( void );

	void	complain( std::string level );

};
#endif
