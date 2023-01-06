/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:51:11 by afaby             #+#    #+#             */
/*   Updated: 2023/01/06 11:16:28 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	max(T &a, T &b)
{
	if (b >= a)
		return (b);
	return (a);
}

#endif
