/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:48:31 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/26 11:42:51 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string type ) : type(type) {}

Weapon::~Weapon( void )
{
	std::cout << "Oh no, " << type << " is lost!" << std::endl;
}

const std::string &Weapon::getType( void ) const
{
	return (type);
}

void Weapon::setType( std::string type )
{
	this->type = type;
}
