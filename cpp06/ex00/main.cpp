/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:41:59 by afaby             #+#    #+#             */
/*   Updated: 2023/01/17 16:36:03 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

void	choose_right_type(std::string arg)
{
	if (arg.length() == 1 && !std::isdigit(arg[0]))
		treat_char(arg);
	else if (is_str_int(arg))
		treat_int(arg);
	else if (is_str_float(arg))
		treat_float(arg);
	else if (is_str_double(arg))
		treat_double(arg);
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

int	main( int argc, char *argv[] )
{
	std::string	arg;

	if (argc != 2)
	{
		std::cerr << "[\e[91mERROR\e[39m] Usage: " << argv[0] << " <arg>" << std::endl;
		return (1);
	}
	arg = argv[1];
	choose_right_type(arg);
	return (0);
}
