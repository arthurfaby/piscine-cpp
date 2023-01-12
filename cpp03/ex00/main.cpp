/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:11:23 by afaby             #+#    #+#             */
/*   Updated: 2023/01/10 17:12:23 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	std::cout << std::endl << " ########## Default constructor ##########" << std::endl;  
	{
		ClapTrap ct;
	
		ct.attack("A");
		ct.attack("B");
		ct.attack("C");
		ct.takeDamage(5);
		ct.takeDamage(4);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.attack("Hortense");
		ct.takeDamage(50);
	}
	std::cout << std::endl << " ########## Name constructor ##########" << std::endl;  
	{
		ClapTrap ct("Polo");
	
		ct.attack("A");
		ct.attack("B");
		ct.attack("C");
		ct.takeDamage(5);
		ct.takeDamage(4);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.attack("Hortense");
		ct.takeDamage(50);
	}
	std::cout << std::endl << " ########## Copy constructor ##########" << std::endl;  
	{
		ClapTrap	tmp("Polo");
		ClapTrap	ct(tmp);

		ct.attack("A");
		ct.attack("B");
		ct.attack("C");
		ct.takeDamage(5);
		ct.takeDamage(4);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.attack("Hortense");
		ct.takeDamage(50);
	}
	std::cout << std::endl << " ########## Copy assignement operator ##########" << std::endl;  
	{
		ClapTrap	tmp("Polo");
		ClapTrap	ct;

		ct = tmp;
		ct.attack("A");
		ct.attack("B");
		ct.attack("C");
		ct.takeDamage(5);
		ct.takeDamage(4);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.beRepaired(1);
		ct.attack("Hortense");
		ct.takeDamage(50);
	}
	return (0);
}
