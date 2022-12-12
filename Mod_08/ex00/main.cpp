/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:22:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/12 18:22:11 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	//	You Code
	try {
		std::vector<int>	zgharti;

		srand(time(0));
		for (int i = 0; i < 5; i++)
			zgharti.push_back(rand() % 10);
		zgharti.push_back(2);
		for (std::vector<int>::iterator idx = zgharti.begin(); idx != zgharti.end(); idx++)
			std::cout << *idx << " ";
		std::cout << std::endl;
		std::cout << easyfind(zgharti, 2) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "******	MAR_BEN CREATION √	******" << std::endl;

	return (0);
}
