/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 02:52:03 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/16 03:21:45 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	std::string	arg;
	Harl		obj;
	
	if (ac != 2)
	{
		std::cerr << "Bad Arguments" << std::endl;
		return (1);
	}
	arg = av[1];
	obj.complain(arg);
	return (0);
}