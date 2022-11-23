/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:27:11 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/22 21:27:12 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScavTrap	&ScavTrap::operator= (const ScavTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	(void)obj;
	return (*this);
}

void	ScavTrap::attack (std::string const &target)
{
	if (this->_energy && this->_hitPt)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << \
				" , causing " << this->_damage << " points of damage!" << std::endl;
		if (this->_damage < 10)
			this->_damage++;
		this->_energy--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " Can't do anything!" << std::endl;
}

void	ScavTrap::guardGate ()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode!" << std::endl;
}