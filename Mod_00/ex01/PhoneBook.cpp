/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/06 17:14:36 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->counter = 0;
	this->check = 0;
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
	std::cout <<  std::setw(10) << std::right << "Index" << "|" 
			<< std::setw(10) << std::right << FST << "|" 
			<< std::setw(10) << std::right << LST << "|" 
			<< std::setw(10) << std::right << NIC  << "|" << std::endl;
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

int	parseEntry(std::string entry)
{
	size_t	len; 
	
	len = entry.length();
	if (len > 1 || !isdigit(entry[0]))
		return (-1);
	return (atoi(entry.c_str()));
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


void	displayContact(Contact choose)
{
	std::cout << std::endl << "- Contact Displaying - " << std::endl 
		<< "-----------------------------"  << std::endl;	
	std::cout << FST << " : "
			<< choose.getFirstName() << std::endl;
	std::cout << LST << " : "
			<< choose.getLastName() << std::endl;
	std::cout << NIC << " : "
			<< choose.getNickName() << std::endl;
	std::cout << PH << " : "
			<< choose.getPhone() << std::endl;
	std::cout << DS << " : "
			<< choose.getSecret() << std::endl;
	std::cout << "-----------------------------" << std::endl;
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
		std::cout << std::setw(10) << std::right
				<< str << "|";
		str = displayFormed(this->arr[idx].getLastName());
		std::cout <<  std::setw(10) << std::right
				<< str << "|";
		str = displayFormed(this->arr[idx].getNickName());
		std::cout <<  std::setw(10) << std::right
				<< str << "|";
		std::cout << std::endl;
		drawLine();
		idx++;
	}
	while (1)
	{	
		str = storeInfo(IDX);
		idx = parseEntry(str);
		if (idx != -1 && idx <= this->check - 1)
			break ;
		std::cout << idx << " : *** No Matching Index : 0 <-> " 
				<< this->check - 1 << " ***"<< std::endl;
	}
	displayContact(this->arr[idx]);
};

void	PhoneBook::Exit(void)
{
	std::cout << "Exit PhoneBook" << std::endl << std::endl;
};
