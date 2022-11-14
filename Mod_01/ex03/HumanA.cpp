/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 04:39:58 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/14 07:01:04 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _weapon(club)
{
	std::cout << this->_name << " : Created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA : Destructor Called" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name
			<< " attacks with their "
			<< this->_weapon.getType() << std::endl;
}