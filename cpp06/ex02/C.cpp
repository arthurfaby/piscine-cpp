/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:09:19 by afaby             #+#    #+#             */
/*   Updated: 2023/01/05 16:09:21 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "C.hpp"

C::C( void )
{
	std::cout << "[\e[36mC\e[39m] Default constructor called." << std::endl;
	return ;
}

C::~C( void )
{
	std::cout << "[\e[36mC\e[39m] Destructor called." << std::endl;
	return ;
}
