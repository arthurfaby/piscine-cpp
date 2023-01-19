/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:41:19 by afaby             #+#    #+#             */
/*   Updated: 2023/01/19 15:48:49 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Span.hpp"

template <typename C>
void	print_container(const C& c)
{
	const unsigned int	size = c.size();

	if (!size)
	{
		std::cerr << "[\e[91m\e[5mERROR\e[0m] Size of parameter is 0." << std::endl;
		return ;
	}
	std::cout << "{";
	for (unsigned int i = 0; i < size - 1; i++)
		std::cout << c[i] << ", ";
	std::cout << c[c.size() - 1] << "}" << std::endl;
}

int	main(void)
{
	std::vector<int> vec;

	vec.push_back(-41);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(9);
	vec.push_back(10);
	std::cout << "\e[36m---------- TESTING CONSTRUCTORS ----------\e[0m" << std::endl;
	{
		Span sp = Span(10);

		sp.fill(vec.begin(), vec.end());
		Span	cpy(sp);
		Span	eq;

		eq = sp;
		std::cout << "sp : " << sp << std::endl;
		std::cout << "cpy : " << cpy << std::endl;
		std::cout << "eq : " << eq << std::endl;
	}
	{
		Span sp = Span(10);

		srand(time(NULL));
		sp.addNumber(150);
		try {
			sp.fill(vec.begin(), vec.end());
		}
		catch (const std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "SPAN : ";
		std::cout << sp <<std::endl;
		try {
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			sp.fill(vec.begin(), vec.end());
		}
		catch (const std::exception & e) {
			std::cerr << e.what() << std::endl;
		}


	}
	Span	sp(5);
	Span	empty;
	Span	one(1);

	try {
		sp.addNumber(42);
		std::cout << sp << std::endl;
		sp.addNumber(51);
		std::cout << sp << std::endl;
		sp.addNumber(40);
		std::cout << sp << std::endl;
		sp.addNumber(48);
		std::cout << sp << std::endl;
		sp.addNumber(24);
		std::cout << sp << std::endl;
		sp.addNumber(9);
		std::cout << sp << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << sp.longestSpan() << std::endl;

	try {
		std::cout << "Shortest span empty : " << empty.shortestSpan();
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	} 
	try {
		std::cout << "Longest span empty : " << empty.longestSpan();
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	} 
	try {
		std::cout << "Shortest span one : " << one.shortestSpan();
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	} 
	try {
		std::cout << "Longest span one : " << one.longestSpan();
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	} 
}
