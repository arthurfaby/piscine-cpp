/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:30:32 by afaby             #+#    #+#             */
/*   Updated: 2023/01/17 16:35:29 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <sstream>
#include <climits>
#include <cfloat>


int		is_str_int( std::string str);
int		is_str_float( std::string str );
int		is_str_double( std::string str );

void	treat_char( std::string arg );
void	treat_int( std::string arg );
void	treat_float( std::string arg );
void	treat_double( std::string arg );
