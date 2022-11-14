/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 04:40:17 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/14 06:54:07 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	// {
	// 	Weapon club = Weapon("crude spiked club");
	// 	HumanA bob("Bob", club);
	// 	bob.attack();
	// 	club.setType("some other type of club");
	// 	bob.attack();
	// }
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.setWeapon(club);
		jim.attack();
	}
	return 0;	
}