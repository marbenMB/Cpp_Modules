/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 05:15:36 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/22 15:01:31 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	goko("Goko");
	ClapTrap	vijita("Vijita");

	for (size_t i = 0; i < 4; i++)
		goko.attack(vijita.getName());
	vijita.takeDamage(goko.getDamage());
	
	vijita.beRepaired(2);
	for (size_t i = 0; i < 4; i++)
		vijita.attack(goko.getName());
	goko.takeDamage(vijita.getDamage());

	goko.clapTrapStat();
	vijita.clapTrapStat();
	return (0);
}