/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:01:06 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/15 18:23:33 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

bool	initStreams(Sed *sd, char **av)
{
	sd->setProp(std::string(av[1]), std::string(av[2]), std::string(av[3]));
	if (!sd->getS1().empty())
	{	
		sd->outFile.open(sd->getOFileName(), std::ios::out);
		sd->inFile.open(sd->getIFileName(), std::ios::in);
		if (sd->outFile.is_open() && sd->inFile.is_open())
			return (1);
	}
	return (0);
}

void	sedReplace(Sed &sd)
{
	std::string	line;
	std::string	all;
	size_t		idx;
	size_t		start;

	while (std::getline(sd.inFile, line))
		all += line + "\n";
	start = 0;
	idx = 0;
	while (idx != std::string::npos)
	{
		idx = all.find(sd.getS1(), start);
		if (idx != std::string::npos)
		{
			all.erase(idx, sd.getS1().length());
			all.insert(idx, sd.getS2());
			start = idx + sd.getS2().length();
		}
	}
	std::cout << all;
}

int main(int ac, char **arg)
{
	Sed	sd;
	if (ac != 4)
	{
		std::cerr << "Bad Arguments : file s1 s2" << std::endl;
		return (1);
	}
	if (initStreams(&sd, arg))
	{
		std::cout << "Files opened" << std::endl;
		sedReplace(sd);
	}
	return (0);
}