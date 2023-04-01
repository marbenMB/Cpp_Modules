/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2023/03/31 20:57:23 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.hpp"
#include <map>

int main()
{
	std::map<std::string, int> m;
	std::map<std::string, int>::iterator low;
	std::map<std::string, int>::iterator up;
	std::string	find("5");
	
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;
		m.insert(std::make_pair(std::to_string(i), i));
		std::cout << "- " << i << " -> " << i << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	std::cout << "        " << find << "     " << std::endl;
	std::cout << "--------------------" << std::endl;

	low = m.lower_bound(find);
	up = m.upper_bound(find);

	if (low->first != find)
		low--;
	std::cout << "- Low : " << low->first << " : " << low->second << std::endl; 
	std::cout << "- Up : " << up->first << " : " << up->second << std::endl; 
}