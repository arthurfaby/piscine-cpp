/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:25:46 by afaby             #+#    #+#             */
/*   Updated: 2023/01/10 09:25:47 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int main( void )
{
    Zombie *horde;
    int size(10);
	int	i(0);

    horde = zombieHorde(size, "Rosita");
    while (i < size) {
        horde[i].announce();
		i++;
    }
	delete[] horde;
}
