/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:17:20 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/26 11:34:26 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( const std::string &name );
		~HumanB( void );

		void setWeapon( Weapon &weapon );
		void attack( void ) const;

	private:
		std::string name;
		Weapon *weapon;
};

#endif