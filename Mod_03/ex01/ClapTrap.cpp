/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 05:15:24 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/22 18:57:54 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPt(100), _energy(50), _damage(20)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPt(100), _energy(50), _damage(20)
{
	std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &obj)
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

void	ClapTrap::attack (std::string const &target)
{
	if (this->_energy && this->_hitPt)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << \
				" , causing " << this->_damage << " points of damage!" << std::endl;
		if (this->_damage < 10)
			this->_damage++;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " Can't do anything!" << std::endl;
}

void	ClapTrap::takeDamage (unsigned int amount)
{
	if (this->_energy && this->_hitPt)
	{
		std::cout << this->_name << " lose " << amount << " hit points!" << std::endl;
		if (this->_damage < 0)
			this->_damage--;
		this->_hitPt -= amount;
		if (this->_hitPt < 0)
			this->_hitPt = 0;
	}
	else
		std::cout << this->_name << " Is suffering!" << std::endl;
}

void	ClapTrap::beRepaired (unsigned int amount)
{
	if (this->_energy && this->_hitPt)
	{
		std::cout << this->_name << " gain " << amount << " hit point!" << std::endl;
		this->_hitPt += amount;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " Can't do anything!" << std::endl;
}

void	ClapTrap::clapTrapStat (void) const
{
	std::cout << "- Name : " << this->_name << std::endl
			<< "- HitPt : " << this->_hitPt << std::endl
			<< "- Energy : " << this->_energy << std::endl
			<< "- Damage : " << this->_damage << std::endl;
}

std::string	ClapTrap::getName (void) const
{
	return (this->_name);
}

int	ClapTrap::getDamage (void) const
{
	return (this->_damage);
}
