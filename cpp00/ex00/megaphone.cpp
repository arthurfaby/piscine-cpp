/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:12:50 by afaby             #+#    #+#             */
/*   Updated: 2022/08/04 11:29:18 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	megaphone(char *arg)
{
	size_t	i;

	i = 0;
	while (i < strlen(arg))
	{
		std::cout << (char)toupper(arg[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (i < argc - 1)
		{
			megaphone(argv[i + 1]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
