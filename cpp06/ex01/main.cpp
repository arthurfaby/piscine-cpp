/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:45:30 by afaby             #+#    #+#             */
/*   Updated: 2023/02/09 10:45:14 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <stdint.h>

typedef struct Data {
	int	x;
	int	y;
}	Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data		data;
	Data		*new_data;
	uintptr_t	ptr;

	data.x = 10;
	data.y = 5;
	std::cout << "----- Before -----" << std::endl;
	std::cout << "Address : " << &data << std::endl;
	std::cout << "[x = " << data.x << ", y = " << data.y << "]" << std::endl;

	ptr = serialize(&data);
	new_data = deserialize(ptr);

	std::cout << "----- After -----" << std::endl;
	std::cout << "Address : " << new_data << std::endl;
	std::cout << "[x = " << new_data->x << ", y = " << new_data->y << "]" << std::endl;
	return (0);
}
