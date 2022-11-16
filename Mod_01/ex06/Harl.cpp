/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 02:51:44 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/16 04:44:06 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	
		void	(Harl::*ft)(void);
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (!level.compare(str[idx]))
		{
			std::cout << "[ " << str[idx] << " ]"<< std::endl;
			break ;
		}
	}
	
	switch (idx)
	{
		case 0:
			ft = &Harl::debug;
			(this->*ft)();
		case 1:
			ft = &Harl::info;
			(this->*ft)();
		case 2:
			ft = &Harl::warning;
			(this->*ft)();
		case 3:
			ft = &Harl::error;
			(this->*ft)();
			break;
	
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
			ft = NULL;
			break;
	}
}