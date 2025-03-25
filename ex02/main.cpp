/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:07:27 by rraumain          #+#    #+#             */
/*   Updated: 2025/03/25 23:16:52 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "&str: " << &str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "&stringREF: " << &stringREF << std::endl;

	std::cout << "str: " << str << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	return (0);
}