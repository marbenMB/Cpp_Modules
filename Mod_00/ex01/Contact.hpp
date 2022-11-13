/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:51:58 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/12 22:49:37 by mbenbajj         ###   ########.fr       */
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
		
	public	:
		void	setFirstName(std::string name);
		void	setLastName(std::string lname);
		void	setNickName(std::string nick);
		void	setPhone(std::string num);
		void	setSecret(std::string secret);

		std::string	getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhone(void) const;
		std::string getSecret(void) const;
};

#endif