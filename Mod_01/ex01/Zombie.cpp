/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:38:08 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/12 17:47:28 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie" <<": Is Born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": Is Dead" << std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << this->_name << ": "
			<< "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
