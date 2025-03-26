/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:20:29 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/26 11:40:20 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( const std::string &name ) : name(name), weapon(NULL) {}

HumanB::~HumanB( void )
{
	std::cout << name << " has been defeated..." << std::endl;
}

void HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
	std::cout << name << " takes a " << weapon.getType() << std::endl;
}

void HumanB::attack( void ) const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their bear hands, what a champ!" << std::endl;
}
