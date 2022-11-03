/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:28:55 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/03 23:01:29 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


// PhoneBook::counter = 0;
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
			<< "    | EXIT : exti the phonebook |" << std::endl
			<< "    -----------------------------" << std::endl << std::endl;
}

int main()
{
	PhoneBook 	book;
	std::string	entry;

	while (1)
	{
		remote_guide();
		std::cout << "+> ";
		getline(std::cin, entry);
		if (std::cin.eof())
			return (1);
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