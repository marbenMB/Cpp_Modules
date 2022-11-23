/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:26:52 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/22 21:26:53 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap	goko("Goko");
	ScavTrap	vijita("Vijita");
	ScavTrap	fraizer("Fraizer");

	goko.attack(vijita.getName());
	vijita.takeDamage(goko.getDamage());
	
	vijita.beRepaired(2);
	vijita.attack(goko.getName());
	goko.takeDamage(vijita.getDamage());

	goko.beRepaired(15);

	fraizer.attack(goko.getName());
	goko.takeDamage(fraizer.getDamage());

	goko.clapTrapStat();
	vijita.clapTrapStat();
	fraizer.clapTrapStat();

	fraizer.attack(vijita.getName());
	vijita.takeDamage(fraizer.getDamage());
	goko.attack(vijita.getName());
	vijita.takeDamage(goko.getDamage());

	goko.clapTrapStat();
	vijita.clapTrapStat();
	fraizer.clapTrapStat();
	return (0);
}
