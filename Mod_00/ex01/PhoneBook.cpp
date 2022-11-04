/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/04 20:55:32 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->counter = 0;
	this->check = 0;
};

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


void	PhoneBook::Add(void)
{	
	std::cout << std::endl << "- Adding New Contact ... - " << std::endl;
	
	// Entring Contact Infos :
	this->arr[this->counter].setFirstName(storeInfo(FST));
	this->arr[this->counter].setLastName(storeInfo(LST));
	this->arr[this->counter].setNickName(storeInfo(NIC));
	this->arr[this->counter].setPhone(storeInfo(PH));
	this->arr[this->counter].setSecret(storeInfo(DS));
	
	// Counter Incremention :
	this->counter++;
	if (this->check != 8)
		this->check = this->counter;
	if (this->counter == 8)
		check = 8;
	this->counter %= 8;
	
	
};

void	drawLine()
{
	for(int i = 0; i < 4; i++)
		std::cout << "-----------";
	std::cout << std::endl;
}

void	drawHeader()
{
	std::cout << std::endl << "             + Searching .... +" << std::endl;
	drawLine();
	std::cout << "     Index" << "|" 
			<< FST << "|" 
			<< " " << LST << "|" 
			<< " " << NIC  << "|" << std::endl;
	drawLine();
}

std::string	displayFormed(std::string str)
{
	size_t	len;

	len = str.length();
	if (len > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

std::string	formating(size_t len)
{
	std::string	str;
	
	while (len < 10)
	{
		str.append(" ");
		len++;
	};
	return (str);
}

void	PhoneBook::Search(void)
{
	std::string	str;
	int	idx = 0;

	drawHeader();
	while (idx < this->check)
	{	
		std::cout << "     " << idx << "    " << "|";
		str = displayFormed(this->arr[idx].getFirstName());
		std::cout << str
				<< formating(str.length()) << "|";
		str = displayFormed(this->arr[idx].getLastName());
		std::cout << str
				<< formating(str.length()) << "|";
		str = displayFormed(this->arr[idx].getNickName());
		std::cout << str
				<< formating(str.length()) << "|";
		std::cout << std::endl;
		drawLine();
		idx++;
	}
};

void	PhoneBook::Exit(void)
{
	std::cout << "Exit PhoneBook" << std::endl << std::endl;
};
