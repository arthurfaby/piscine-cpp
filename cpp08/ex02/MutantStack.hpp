/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:23:10 by afaby             #+#    #+#             */
/*   Updated: 2023/01/19 11:12:41 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void)
	{
		return (this->c.begin());
	}
	iterator end(void)
	{
		return (this->c.end());
	}
};
