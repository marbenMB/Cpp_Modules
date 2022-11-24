/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:04:49 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/24 22:22:01 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap (std::string name)
{
	std::cout << "FragTrap Constructor Called" << std::endl;
	this->_name = name;
	this->_hitPt = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

FragTrap	&FragTrap::operator= (const FragTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPt = obj._hitPt;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys (void)
{
	std::cout << "FragTrap " << this->_name << " Requests Positive High Fives!" << std::endl;
}
