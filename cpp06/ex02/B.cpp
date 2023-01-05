/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:09:30 by afaby             #+#    #+#             */
/*   Updated: 2023/01/05 16:09:31 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "B.hpp"

B::B( void )
{
	std::cout << "[\e[36mB\e[39m] Default constructor called." << std::endl;
	return ;
}

B::~B( void )
{
	std::cout << "[\e[36mB\e[39m] Destructor called." << std::endl;
	return ;
}
