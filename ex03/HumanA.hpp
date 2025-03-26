/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:01:39 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/26 11:15:47 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( const std::string &name, Weapon &weapon );
		~HumanA( void );

		void attack( void ) const;
		
	private:
		std::string name;
		Weapon &weapon;
};

#endif