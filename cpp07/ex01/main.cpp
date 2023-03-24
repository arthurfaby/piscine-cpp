/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:01:44 by afaby             #+#    #+#             */
/*   Updated: 2023/02/28 11:58:57 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "iter.hpp"

template < typename T >
void	print(T p)
{
	std::cout << p << std::endl;
}

template < typename T >
void	print_array(T array[], int size)
{
	int	i(0);

	std::cout << "Array : {";
	while (i < size - 1)
	{
		std::cout << array[i] << ", ";
		i++;
	}
	std::cout << array[i] << "}" << std::endl;
}

void	squared(int &a)
{
	a = a * a;
}

void	add_42( std::string &str )
{
	str.push_back('4');
	str.push_back('2');
}

int	main(void)
{
	int			array_int[] = {1, 2, 3, 4, 5};
	int			size_int(5);

	std::string	array_str[] = {"Hello", "world", "!"};
	int			size_str(3);

	print_array(array_int, size_int);
	iter(array_int, size_int, &print<int>);
	print_array(array_int, size_int);

	print_array(array_int, size_int);
	iter(array_int, size_int, &squared);
	print_array(array_int, size_int);

	print_array(array_str, size_str);
	iter(array_str, size_str, &add_42);
	print_array(array_str, size_str);
	return (0);
}
