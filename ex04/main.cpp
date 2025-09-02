/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:52:23 by rraumain          #+#    #+#             */
/*   Updated: 2025/09/03 01:46:01 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string line, const std::string &s1, const std::string &s2 )
{
	if (s1.empty())
		return (line);

	std::string res;
	size_t pos = 0;
	size_t found;

	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		res.append(line, pos, found - pos);
		res.append(s2);
		pos = found + s1.length();
	}
	res.append(line.substr(pos));
	return (res);
}

int main( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cout << "Error: Could not open input file." << std::endl;
		return (1);
	}

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cout << "Error: Could not open output file." << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(infile, line))
	{
		outfile << replace(line, s1, s2) << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
