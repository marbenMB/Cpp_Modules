/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:13 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/10/31 19:47:14 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH_BOOK_HPP
#define	PH_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	Contact arr[8];
	int counter = 0;
};

#endif