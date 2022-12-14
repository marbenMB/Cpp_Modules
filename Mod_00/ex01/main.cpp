/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:28:55 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/04 23:41:45 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	storeInfo(std::string msg)
{
	std::string	entry;

	while (entry.empty())
	{
		std::cout << msg << " : ";
		getline(std::cin, entry);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit (1);
		}
	}
	return (entry);
};

void	error_msg(std::string entry)
{
	std::cout << std::endl << entry << " : *** No Matching Command ***" << std::endl;
}

void	remote_guide(void)
{
	std::cout << std::endl << "      PhoneBook Command Usage : " << std::endl 
			<< "    -----------------------------" << std::endl
			<< "    | ADD : Add new contact     |" << std::endl
			<< "    | SEARCH : Look for contact |" << std::endl
			<< "    | EXIT : exit the phonebook |" << std::endl
			<< "    -----------------------------" << std::endl << std::endl;
}

int main()
{
	PhoneBook 	book;
	std::string	entry;

	while (1)
	{
		remote_guide();
		entry = storeInfo("+> ");
		if (entry == "EXIT")
		{
			book.Exit();
			break ;
		}
		else if (entry == "ADD")
			book.Add();
		else if (entry == "SEARCH")
			book.Search();
		else
			error_msg(entry);
	}
	
	return (0);
}