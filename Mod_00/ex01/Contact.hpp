/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:51:58 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/10/31 19:51:59 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define CONTACT_HPP

//	***	INCDLUDES :

#include <iostream>
#include <iomanip>

//	*** CLASS :

// First name | last name | nickname | phone number | darkest secret. A saved contact can’t have empty fields.

class Contact
{
private :
	std::string	DarkSecret;
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNum;
};

#endif