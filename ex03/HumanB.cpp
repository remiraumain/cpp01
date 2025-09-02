/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:20:29 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/03 01:21:56 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( const std::string &name ) : _name(name), _weapon(NULL) {}

HumanB::~HumanB( void )
{
	std::cout << _name << " has been defeated..." << std::endl;
}

void HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
	std::cout << _name << " takes a " << weapon.getType() << std::endl;
}

void HumanB::attack( void ) const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their bare hands, what a champ!" << std::endl;
}
