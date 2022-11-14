/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 04:40:11 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/14 06:57:17 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << this->_name << " : Created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB : Destructor Called" << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->_weapon = &club;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
	{
		std::cout << this->_name
				<< " attacks with their "
				<< this->_weapon->getType() << std::endl;
	}
}
