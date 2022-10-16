/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:50:03 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/10/16 16:26:35 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	arg;
	int	idx;

	arg = 1;
	while (arg < ac)
	{
		idx = 0;
		while (av[arg][idx])
		{
			if (isalpha(av[arg][idx]))
				std::cout << (char)toupper(av[arg][idx]);
			else
				std::cout << av[arg][idx];
			idx++;
		}
		if (av[arg + 1])
			std::cout << " ";
		arg++;
	}
	std::cout << "\n";
	
	return (0);
}