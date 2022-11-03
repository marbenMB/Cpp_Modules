/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:13 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/03 18:37:52 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH_BOOK_HPP
#define	PH_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	Contact arr[8];
	int counter;

	
public :
	PhoneBook();
	void	Add(void);
	void	Search(void);
	void	Exit(void);
	void	call(void);
};

#endif