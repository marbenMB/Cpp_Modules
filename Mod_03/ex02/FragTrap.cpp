/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:04:49 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/23 01:04:50 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
}

FragTrap	&FragTrap::operator= (const FragTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	
	return (*this);
}
