/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:30:02 by afaby             #+#    #+#             */
/*   Updated: 2023/01/17 16:30:13 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

int	is_str_float( std::string str )
{
	int			i;

	i = 0;
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return (1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!std::isdigit(str[i]) && str[i] != '.')
		return (0);
	while (str[i] && std::isdigit(str[i]))
		i++;
	if (str[i] == '.')
		i++;
	if (str[i - 1] == '.' && !std::isdigit(str[i]))
		return (0);
	while (str[i] && std::isdigit(str[i]))
		i++;
	if (str[i] == 'f')
		i++;
	else
		return (0);
	if (!str[i])
		return (1);
	return (0);
}

static void	convert_all_from_float(std::string arg, float f)
{
	int	tmp;

	std::cout << "char: ";
		if (f < 0 || f > 255)
			std::cout << "impossible";
		else if (std::isprint(f))
			std::cout << "'" << static_cast<char>(f) << "'";
		else
			std::cout << "non displayable";
		std::cout << std::endl;
		if (!(std::stringstream(arg) >> tmp))
			std::cout << "int: overflow" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;

}

void	treat_float(std::string arg)
{
	float	f;

	if (!arg.compare("-inff") || !arg.compare("+inff") || !arg.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << arg << std::endl;
		std::cout << "double: " << arg.erase(arg.length() - 1) << std::endl;	
	}
	else if (!(std::stringstream(arg) >> f))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: overflow" << std::endl;
		std::cout << "double: invalid format" << std::endl;
	}
	else
		convert_all_from_float(arg, f);
}

