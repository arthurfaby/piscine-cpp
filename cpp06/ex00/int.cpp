/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:32:40 by afaby             #+#    #+#             */
/*   Updated: 2023/01/17 16:33:10 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

int	is_str_int(std::string str)
{
	int	i;
	int	tmp;
	int	length;

	i = 0;
	length = str.length();
	if (!(std::stringstream(str) >> tmp))
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < length)
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	treat_int(std::string arg)
{
	int		i;

	if (!(std::stringstream(arg) >> i))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: overflow" << std::endl;
	}
	else
	{
		std::cout << "char: ";
		if (i < 0 || i > 255)
			std::cout << "impossible";
		else if (std::isprint(i))
			std::cout << "'" << static_cast<char>(i) << "'";
		else
			std::cout << "non displayable";
		std::cout << std::endl;
		std::cout << "int: " << i << std::endl;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}


