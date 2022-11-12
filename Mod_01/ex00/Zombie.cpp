/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:56:34 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/12 17:33:11 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string naming) : _name(naming)
{
	std::cout << this->_name <<": Is Born" << std::endl;
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