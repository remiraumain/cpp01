/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:10:34 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/26 11:40:37 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( const std::string &name, Weapon &weapon ) : name(name), weapon(weapon) {}

HumanA::~HumanA( void )
{
	std::cout << name << " has been defeated..." << std::endl;
}

void HumanA::attack( void ) const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
