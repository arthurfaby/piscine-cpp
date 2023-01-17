/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:33:22 by afaby             #+#    #+#             */
/*   Updated: 2023/01/17 16:36:14 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

int	is_str_double( std::string str )
{
	int			i;

	i = 0;
	if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
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
	if (!str[i])
		return (1);
	return (0);
}

static void	convert_all_from_double(double d)
{
	std::cout << "char: ";
	if (d< 0 || d > 255)
		std::cout << "impossible";
	else if (std::isprint(d))
		std::cout << "'" << static_cast<char>(d) << "'";
	else
		std::cout << "non displayable";
	std::cout << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d > FLT_MAX || d < FLT_MIN)
		std::cout << "float: overflow" << std::endl;
	else
	{
		std::cout << "float: " << std::fixed
			<< std::setprecision(1) << static_cast<float>(d)
			<< "f" << std::endl;
	}
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;

}

void	treat_double(std::string arg)
{
	double	d;

	if (!arg.compare("-inf") || !arg.compare("+inf") || !arg.compare("nan"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << arg << "f" << std::endl;
		std::cout << "double: " << arg << std::endl;	
	}
	else if (!(std::stringstream(arg) >> d))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: overflow" << std::endl;
		std::cout << "double: overflow" << std::endl;
	}
	else
		convert_all_from_double(d);
}
