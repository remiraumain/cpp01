/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:06:33 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/25 09:23:54 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>

Zombie::Zombie( std::string name )
{
	_name = name;
}

void	zombie::announce( void )
{
	std::cout << _name << ":" << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
