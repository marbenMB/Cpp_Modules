/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:13 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/04 15:49:33 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH_BOOK_HPP
#define	PH_BOOK_HPP

//	***	INCLUDES :
#include "Contact.hpp"

//	*** DEFINES :
#define	FST "First Name : "
#define	LST "Last Name : "
#define	NIC "Nick Name : "
#define	PH "Phone Number : "

// *** CLASSES
class PhoneBook
{
	Contact arr[8];
	int counter;

	
public :
	PhoneBook();
	void	Add(void);
	void	Search(void);
	void	Exit(void);
};

#endif