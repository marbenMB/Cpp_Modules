/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/03 20:56:23 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	counter = 0;
};

void	PhoneBook::Add(void)
{
	std::cout << "+ > ADD member Function of the Contact Class - N : " << counter % 8 << std::endl;
	counter++;
	
};

void	PhoneBook::Search(void)
{
	std::cout << "Search member Function of the Contatct Calss" << std::endl;
};

void	PhoneBook::Exit(void)
{
	std::cout << "Exit PhoneBook" << std::endl;
};

void	PhoneBook::call(void)
{
	Add();
	Search();
	Exit();
};