/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/03 23:00:32 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	counter = 0;
};

void	PhoneBook::Add(void)
{
	std::string	entry;
	
	std::cout << std::endl << "- Adding New Contact ... -" << std::endl;
	
	// Entring Contact Infos :
	if (entry.empty())
	{
		while (entry.empty())
		{
			std::cout << "First Name : ";
			getline(std::cin, entry);
		}
		arr[counter % 8].setFirstName(entry);
		while (1)
		{
			std::cout << "Last Name : ";
			getline(std::cin, entry);
			if (!entry.empty())
				break ;
		}
		arr[counter % 8].setLastName(entry);
		while (1)
		{
			std::cout << "Phone Number : ";
			getline(std::cin, entry);
			if (!entry.empty())
				break ;
		}
		arr[counter % 8].setPhone(entry);
		while (1)
		{
			std::cout << "Darkest Secret : ";
			getline(std::cin, entry);
			if (!entry.empty())
				break ;
		}
		arr[counter % 8].setSecret(entry);
	}
	counter++;
	
};

void	PhoneBook::Search(void)
{
	std::cout << std::endl << "- Searching ... -" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "First Name : " << arr[counter % 8].getFirstName() << std::endl;
		std::cout << "Last Name : " << arr[counter % 8].getLastName() << std::endl;
		std::cout << "Phone Number : " << arr[counter % 8].getPhone() << std::endl;
		std::cout << "Darkest Secret : " << arr[counter % 8].getFirstName() << std::endl;
	}
};

void	PhoneBook::Exit(void)
{
	std::cout << "Exit PhoneBook" << std::endl;
};
