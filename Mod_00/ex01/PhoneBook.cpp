/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/04 17:54:36 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->counter = 0;
};

std::string	store_info(std::string msg)
{
	std::string	entry;

	while (entry.empty())
	{
		std::cout << msg;
		getline(std::cin, entry);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit (1);
		}
	}
	return (entry);
};

void	PhoneBook::Add(void)
{	
	std::cout << std::endl << "- Adding New Contact ... - " << this->counter << std::endl;
	
	// Entring Contact Infos :
	this->arr[this->counter].setFirstName(store_info(FST));
	this->arr[this->counter].setLastName(store_info(LST));
	this->arr[this->counter].setNickName(store_info(NIC));
	this->arr[this->counter].setPhone(store_info(PH));
	this->arr[this->counter].setSecret(store_info(DS));
	

	this->counter++;
	this->counter %= 8;
	
	
};

void	PhoneBook::Search(void)
{
	std::cout << std::endl << "- Searching ... -" << std::endl;
	std::cout << this->arr[0].getFirstName() << std::endl;
	std::cout << this->arr[0].getLastName() << std::endl;
	std::cout << this->arr[0].getNickName() << std::endl;
	std::cout << this->arr[0].getPhone() << std::endl;
	std::cout << this->arr[0].getSecret() << std::endl;
};

void	PhoneBook::Exit(void)
{
	std::cout << "Exit PhoneBook" << std::endl << std::endl;
};
