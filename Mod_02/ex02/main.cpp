/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:24 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/20 07:32:45 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed	const a(12);
	Fixed	const b(44);
	// Fixed	c;

	// c = a / b;
	std::cout << Fixed::max(a, b) << std::endl;
	// std::cout << a.getRawBits() << "\t" << b.getRawBits() << std::endl;
	// std::cout << (b - a) << std::endl;
	return (0);
}
