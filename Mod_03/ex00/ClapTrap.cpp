/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 05:15:24 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/21 05:21:52 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hitPt(10), _energy(10), _damage(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPt(10), _energy(10), _damage(0)
{
	std::cout << "Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	
	return (*this);
}
