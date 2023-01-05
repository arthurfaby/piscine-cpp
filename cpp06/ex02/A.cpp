/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:09:24 by afaby             #+#    #+#             */
/*   Updated: 2023/01/05 16:09:26 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"

A::A( void )
{
	std::cout << "[\e[36mA\e[39m] Default constructor called." << std::endl;
	return ;
}

A::~A( void )
{
	std::cout << "[\e[36mA\e[39m] Destructor called." << std::endl;
	return ;
}
