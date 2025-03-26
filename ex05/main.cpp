/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:41:41 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/26 14:40:09 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl harl;

	std::cout << "Test DEBUG:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nTest INFO:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nTest WARNING:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nTest ERROR:" << std::endl;
	harl.complain("ERROR");

	std::cout << "\nTest unknown level:" << std::endl;
	harl.complain("RAS");

	return (0);
}
