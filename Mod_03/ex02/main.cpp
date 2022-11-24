/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:04:44 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/24 03:23:32 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// int main()
// {
// 	ClapTrap	goko("Goko");
// 	ScavTrap	vijita("Vijita");
// 	FragTrap	fraizer("Fraizer");

// 	goko.attack(vijita.getName());
// 	vijita.takeDamage(goko.getDamage());
	
// 	vijita.beRepaired(2);
// 	vijita.attack(goko.getName());
// 	goko.takeDamage(vijita.getDamage());

// 	goko.beRepaired(15);

// 	fraizer.attack(goko.getName());
// 	goko.takeDamage(fraizer.getDamage());

// 	goko.clapTrapStat();
// 	vijita.clapTrapStat();
// 	fraizer.clapTrapStat();

// 	fraizer.attack(vijita.getName());
// 	vijita.takeDamage(fraizer.getDamage());
// 	goko.attack(vijita.getName());
// 	vijita.takeDamage(goko.getDamage());

// 	goko.clapTrapStat();
// 	vijita.clapTrapStat();
// 	fraizer.clapTrapStat();
// 	vijita.guardGate();
// 	fraizer.highFivesGuys();
// 	return (0);
// }

int main()
{
	ScavTrap	goko("Goko");
	FragTrap	fraizer("Fraizer");


	goko.attack(fraizer.getName());
	fraizer.takeDamage(goko.getDamage());

	goko.clapTrapStat();
	fraizer.clapTrapStat();

	return (0);
}
