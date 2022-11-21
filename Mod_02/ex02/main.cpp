/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:24 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/20 08:49:15 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed	a(12);
	Fixed	b(44);
	Fixed	d(a);
	Fixed	c(1.4f);

	std:: cout << (a < b) << "\t" << (a >= b) << std::endl
			<< (a + c) << "\t" << (d - b) << std::endl
			<< a++ << "\t" << a << std::endl
			<< ++c << "\t" << c << std::endl
			<< Fixed::min(a, c) << "\t" << Fixed::max(d, b) << std::endl;
	return (0);
}
