/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:41:59 by afaby             #+#    #+#             */
/*   Updated: 2023/01/05 15:32:13 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <sstream>
# include <climits>
# include <cfloat>

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

void	treat_char(std::string arg)
{
	char	c(arg[0]);

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
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
	{
		std::cout << "char: ";
		if (f < 0 || f > 255)
			std::cout << "impossible";
		else if (std::isprint(f))
			std::cout << "'" << static_cast<char>(f) << "'";
		else
			std::cout << "non displayable";
		std::cout << std::endl;
		if (f > INT_MAX || f < INT_MIN)
			std::cout << "int: overflow" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
	}
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
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
}

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
