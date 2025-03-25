/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 22:23:23 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/25 22:43:52 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);	
	return (horde);
}