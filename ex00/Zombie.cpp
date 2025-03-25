/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:06:33 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/25 22:14:30 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>
#include <iostream>

Zombie::Zombie( std::string name ) : name_(name) {}

Zombie::~Zombie( void )
{
	std::cout << name_ << ": has been killed!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
