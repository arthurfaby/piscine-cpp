/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:59:30 by afaby             #+#    #+#             */
/*   Updated: 2023/01/19 09:21:55 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::iterator	easyfind(T object, int to_find)
{
	typename T::iterator	first;
	typename T::iterator	last;
	typename T::iterator	res;

	first = object.begin();
	last = object.end();
	res = std::find(first, last, to_find);
	if (res == last)
		throw std::range_error("[\e[91m\e[5mERROR\e[0m] Can't find value");
	return (res);
}

#endif
