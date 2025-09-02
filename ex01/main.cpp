/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:24:37 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/03 00:22:42 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde( int N, std::string name);

int	main( void )
{
	int N = 5;
	Zombie	*horde = zombieHorde(N, "Robert");

	if (!horde)
	{
		std::cout << "No zombies today..." << std::endl;
		return (1);
	}
	
	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}
