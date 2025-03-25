/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ranbomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:07:40 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/25 09:23:51 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	ranbomChump( std::string name )
{
	Zombie	zombie;

	zombie::Zombie(name);
	zombie::announce();
}