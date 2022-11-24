/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:04:44 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/24 18:21:01 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	goko("Goko");
	ScavTrap	vijita("Vijita");
	FragTrap	fraizer("Fraizer");

	goko.clapTrapStat();
	vijita.clapTrapStat();

	goko.attack(vijita.getName()); 						// goko lose 1 energy. damage increase +1.
	goko.attack(vijita.getName()); 						// goko lose 1 energy. damage increase +1.
	goko.attack(vijita.getName()); 						// goko lose 1 energy. damage increase +1.
	vijita.takeDamage(goko.getDamage());				// vijita lose 2 hitPt. damage decrease -1.

	vijita.attack(goko.getName());						// vijita lose 1 energy. damage increase +1.
	goko.takeDamage(vijita.getDamage());				// goko lose 20 hitPt. damage decrease -1.
	
	vijita.guardGate();
	goko.beRepaired(2);									// can't do anything.
	
	goko.clapTrapStat();
	vijita.clapTrapStat();
	fraizer.clapTrapStat();
	
	vijita.attack(fraizer.getName());
	fraizer.takeDamage(vijita.getDamage());

	fraizer.attack(vijita.getName());
	vijita.takeDamage(fraizer.getDamage());

	vijita.clapTrapStat();
	fraizer.clapTrapStat();

	return (0);
}
