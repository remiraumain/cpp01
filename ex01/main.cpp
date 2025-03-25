/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:24:37 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/25 22:43:56 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name);

int	main( void )
{
	Zombie	*horde = zombieHorde(5, "Jacky");

	for (int i = 0; i < 5; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}
