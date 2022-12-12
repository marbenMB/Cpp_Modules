/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:22:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/12 20:14:29 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	arrayTest (void)
{
	const size_t					size = 10;
	int								l = size;
	std::array<int, size>			myArr;
	std::array<int, size>::iterator	idx;

	for	(int i = 0; i < l; i++)
		myArr[i] = rand() % 10;

	// myArr.back() = 5;	// Always add 5 is in the back. myArr[size - 1] = 5;
	
	for (idx = myArr.begin(); idx != myArr.end(); idx++)
		std::cout << *idx << " ";
	std::cout << std::endl;
	std::cout << easyfind(myArr, 5) << std::endl;
}

void	vectorTest (void)
{
	std::vector<int>	myVec;

	for (int i = 0; i < 5; i++)
		myVec.push_back(rand() % 10);
		
	// myVec.push_back(2);	// Always push back 2. myVec[size - 1] = 2;
	
	for (std::vector<int>::iterator idx = myVec.begin(); idx != myVec.end(); idx++)
		std::cout << *idx << " ";
	std::cout << std::endl;
	std::cout << easyfind(myVec, 2) << std::endl;
}

int main()
{
	//	You Code
	srand(time(0));
	try {
		std::cout << std::endl << "- Vector Container Test :" << std::endl;
		vectorTest();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl << "- Array Container Test :" << std::endl;
		arrayTest();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "******	MAR_BEN CREATION √	******" << std::endl;

	return (0);
}
