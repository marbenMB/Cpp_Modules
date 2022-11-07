/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:52:01 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/07 03:59:10 by mbenbajj         ###   ########.fr       */
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

std::string Contact::getFirstName(void) const
{
	return (this->FirstName);
};

std::string Contact::getLastName(void) const
{
	return (this->LastName);
};

std::string Contact::getNickName(void) const
{
	return (this->NickName);
};

std::string Contact::getPhone(void) const
{
	return (this->PhoneNum);
};

std::string	Contact::getSecret(void) const
{
	return (this->DarkSecret);
};
