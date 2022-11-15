/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:01:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/15 16:04:19 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	Sed::setProp(std::string file, std::string s1, std::string s2)
{
	this->_iFileName = file;
	this->_oFileName = file.append(".replace");
	this->_s1 = s1;
	this->_s2 = s2;
}

std::string		Sed::getOFileName(void)	const
{
	return (this->_oFileName);
}

std::string		Sed::getIFileName(void)	const
{
	return (this->_iFileName);
}

std::string	Sed::getS1(void)	const
{
	return (this->_s1);
}

std::string	Sed::getS2(void)	const
{
	return (this->_s2);
}
