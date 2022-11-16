/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 02:51:44 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/16 03:28:58 by mbenbajj         ###   ########.fr       */
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
	ptrFt	fun[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	ptrFt	ft;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (!level.compare(str[idx]))
			break ;
	}
	switch (idx)
	{
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			ft = NULL;
			break;
	
		default:
			ft = fun[idx];
			break;
	}
	if (ft)
	{
		std::cout << "[ " << str[idx] << " ]" << std::endl;
		while (idx < 4)
		{
			(this->*ft)();
			idx++;
			ft = fun[idx];
		}
	}
}