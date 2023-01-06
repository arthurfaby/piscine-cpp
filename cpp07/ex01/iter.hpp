/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:15:57 by afaby             #+#    #+#             */
/*   Updated: 2023/01/06 11:18:40 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename A, typename L, typename F>
void	iter(A &array, L length, F function)
{
	int	i(0);

	while (i < length)
	{
		function(array[i]);
		i++;
	}
}

#endif
