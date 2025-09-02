/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:10:34 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/03 01:22:34 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( const std::string &name, Weapon &weapon ) :
	_name(name), 
	_weapon(weapon) 
	{}

HumanA::~HumanA( void )
{
	std::cout << _name << " has been defeated..." << std::endl;
}

void HumanA::attack( void ) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
