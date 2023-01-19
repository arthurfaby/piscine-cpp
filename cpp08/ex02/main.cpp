/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:22:14 by afaby             #+#    #+#             */
/*   Updated: 2023/01/19 15:35:19 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main( void )
{
	std::cout << "\e[36m---------- Testing constructors ----------\e[0m" << std::endl;
	{
		MutantStack<int> ms;
		
		ms.push(1);
		ms.push(2);
		ms.push(3);
		ms.push(4);

		MutantStack<int> ms_cpy(ms);
		MutantStack<int> ms_eq;

		ms_eq = ms;
		std::cout << "MS top : " << ms.top() << std::endl;
		std::cout << "MS_CPY top : " << ms_cpy.top() << std::endl;
		std::cout << "MS_EQ top : " << ms_eq.top() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[36m---------- MutantStack int ----------\e[0m" << std::endl;
	{
		MutantStack<int> mstack;
	
		mstack.push(0);
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		mstack.push(6);
		mstack.push(7);
		mstack.push(8);
		mstack.push(9);
		mstack.pop();
		mstack.push(9);
		std::cout << "Stack : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}" << std::endl;
		std::cout << "Top : " << mstack.top() << std::endl;
		std::cout << "Size : " << mstack.size() << std::endl;
	
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
				std::cout << *it << std::endl;
				++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << "\e[36m---------- Vector int ----------\e[0m" << std::endl;
	{
		std::vector<int> vec;

		vec.push_back(0);
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		vec.push_back(6);
		vec.push_back(7);
		vec.push_back(8);
		vec.push_back(9);
		std::cout << "Vector : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}" << std::endl;
		std::cout << "Top : " << vec.at(vec.size() - 1) << std::endl;
		std::cout << "Size : " << vec.size() << std::endl;

		std::vector<int>::iterator it = vec.begin();
		std::vector<int>::iterator ite = vec.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << std::endl;
	std::cout << "\e[36m---------- MutantStack string ---------\e[0m" << std::endl;
	{
		MutantStack<std::string> mstack;
	
		mstack.push("0");
		mstack.push("1");
		mstack.push("2");
		mstack.push("3");
		mstack.push("4");
		mstack.push("5");
		mstack.push("6");
		mstack.push("7");
		mstack.push("8");
		mstack.push("9");
		mstack.pop();
		mstack.push("9");
		std::cout << "Stack : {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}" << std::endl;
		std::cout << "Top : " << mstack.top() << std::endl;
		std::cout << "Size : " << mstack.size() << std::endl;
	
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
				std::cout << *it << std::endl;
				++it;
		}
		std::stack<std::string> s(mstack);
	}
	std::cout << std::endl;
	std::cout << "\e[36m---------- Vector string ----------\e[0m" << std::endl;
	{
		std::vector<std::string> vec;

		vec.push_back("0");
		vec.push_back("1");
		vec.push_back("2");
		vec.push_back("3");
		vec.push_back("4");
		vec.push_back("5");
		vec.push_back("6");
		vec.push_back("7");
		vec.push_back("8");
		vec.push_back("9");
		std::cout << "Vector : {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}" << std::endl;
		std::cout << "Top : " << vec.at(vec.size() - 1) << std::endl;
		std::cout << "Size : " << vec.size() << std::endl;

		std::vector<std::string>::iterator it = vec.begin();
		std::vector<std::string>::iterator ite = vec.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	return (0);
}
