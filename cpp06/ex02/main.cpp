/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:10:51 by afaby             #+#    #+#             */
/*   Updated: 2023/01/17 16:37:42 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <cstdlib>
# include <time.h>
# include <iostream>

Base	*generate(void)
{
	int	rd;

	rd = rand() % 3;
	switch(rd)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (NULL);
	}
	return (NULL);
}

void	identity(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The type of the pointer is A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The type of the pointer is B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The type of the pointer is C." << std::endl;
	else
		std::cerr << "Type is not valid." << std::endl;
}

void	identity(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The type of the reference is A." << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		B	&b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "The type of the reference is B." << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		C	&c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "The type of the reference is C." << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	std::cerr << "Type is not valid." << std::endl;
}

int	main(void)
{
	Base	*base;

	srand(time(NULL));
	base = generate();
	identity(base);
	identity(*base);
	delete base;
}
