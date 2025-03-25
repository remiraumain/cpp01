/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:06:33 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/25 22:43:45 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>
#include <iostream>

Zombie::Zombie( void ) {}

Zombie::~Zombie( void )
{
	std::cout << name_ << ": has been killed!" << std::endl;
}

void	Zombie::setName( std::string name )
{
	name_ = name;
}

void	Zombie::announce( void )
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
