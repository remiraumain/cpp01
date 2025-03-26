/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:47:29 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/26 15:02:30 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return (1);
	}
	Harl harl;

	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	index = -1;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == argv[1])
			index = i;
	}

	switch (index)
	{
		case 0:
			harl.complain("DEBUG");
			// fallthrough
		case 1:
			std::cout << std::endl;
			harl.complain("INFO");
			// fallthrough
		case 2:
			std::cout << std::endl;
			harl.complain("WARNING");
			// fallthrough
		case 3:
			std::cout << std::endl;
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[Harl is complaining about insignificant problems]" << std::endl;
	}
	return (0);
}
