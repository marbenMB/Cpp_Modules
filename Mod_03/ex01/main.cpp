/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:26:52 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/24 17:50:26 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap	goko("Goko");
	ScavTrap	vijita("Vijita");
	ScavTrap	fraizer("Fraizer");

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
	return (0);
}
