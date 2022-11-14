/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 04:40:24 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/14 04:40:25 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon : Constructor Called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon : Destructor Called" << std::endl;
}

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string	type)
{
	this->_type = type;
}