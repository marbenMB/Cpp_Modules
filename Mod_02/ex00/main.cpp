/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:24 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/19 20:19:31 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;
	
	c = a;
	
	std::cout << a.getRawBits() << std::endl
			<< b.getRawBits() << std::endl
			<< c.getRawBits() << std::endl;
	return (0);
}