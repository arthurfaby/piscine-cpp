/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:34:49 by afaby             #+#    #+#             */
/*   Updated: 2023/01/17 16:35:17 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

void	treat_char(std::string arg)
{
	char	c(arg[0]);

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed
		<< std::setprecision(1) << static_cast<float>(c)
		<< "f" << std::endl;
	std::cout << "double: " << std::fixed
		<< std::setprecision(1) << static_cast<double>(c) << std::endl;
}
