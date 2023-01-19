/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:11:51 by afaby             #+#    #+#             */
/*   Updated: 2023/01/19 09:23:36 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int	main(void)
{
	{
		std::vector<int>	vec;
	
		vec.push_back(3);
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(4);
		vec.push_back(2);
		vec.push_back(4);
		try {
			std::cout << *easyfind(vec, 4) << std::endl;
		} catch ( std::exception & e ) {
			std::cerr << e.what() << std::endl;
		}
		try {
			std::cout << *easyfind(vec, 5) << std::endl;
		} catch ( std::exception & e ) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::list<int>	lst;
	
		lst.push_back(0);
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);
		lst.push_back(5);
		try {
			std::cout << *easyfind(lst, 2) << std::endl;
		} catch ( std::exception & e ) {
			std::cerr << e.what() << std::endl;
		}
		try {
			std::cout << *easyfind(lst, 9) << std::endl;
		} catch ( std::exception & e ) {
			std::cerr << e.what() << std::endl;
		}
	}
}
