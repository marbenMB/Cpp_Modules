/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:52:01 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/10/31 19:52:02 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string name)
{
	this->FirstName = name;
};

void	Contact::setLastName(std::string lname)
{
	this->LastName = lname;
};

void	Contact::setNickName(std::string nick)
{
	this->NickName = nick;
};

void	Contact::setPhone(std::string num)
{
	this->PhoneNum = num;
};

void	Contact::setSecret(std::string secret)
{
	this->DarkSecret = secret;
};

std::string Contact::getFirstName(void)
{
	return (this->FirstName);
};

std::string Contact::getLastName(void)
{
	return (this->LastName);
};

std::string Contact::getNickName(void)
{
	return (this->NickName);
};

std::string Contact::getPhone(void)
{
	return (this->PhoneNum);
};

std::string	Contact::getSecret(void)
{
	return (this->DarkSecret);
};
