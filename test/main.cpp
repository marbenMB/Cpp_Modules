/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/12 22:34:56 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.hpp"
#include <vector>

int main()
{
	std::vector<int> vec(4);
	std::vector<int> tmp;
	std::vector<int>::iterator	idx;
	
	srand(time(0));
	for (int i = 0; i < 4; i++)
	{
		int val = rand() % -20;
		vec.push_back(val);
	}
	
	for (idx = vec.begin(); idx != vec.end(); idx++)
		std::cout << *idx << " ";
	std::cout << std::endl;
	
	tmp = vec;
	std::sort (tmp.begin(), tmp.end());

	for (idx = vec.begin(); idx != vec.end(); idx++)
		std::cout << *idx << " ";
	std::cout << std::endl;

	for (idx = tmp.begin(); idx != tmp.end(); idx++)
		std::cout << *idx << " ";
	std::cout << std::endl;
}