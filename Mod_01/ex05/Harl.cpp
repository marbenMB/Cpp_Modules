/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:53:32 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/16 02:47:11 by mbenbajj         ###   ########.fr       */
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
			break ;
	}
	
	switch (idx)
	{
		case 0:
			ft = &Harl::debug;
			break;
		case 1:
			ft = &Harl::info;
			break;
		case 2:
			ft = &Harl::warning;
			break;
		case 3:
			ft = &Harl::error;
			break;
	
		default:
			std::cout << "** No Func Call ***" << std::endl;
			ft = NULL;
			break;
	}
	if (ft)
		(this->*ft)();
}