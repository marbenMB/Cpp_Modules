/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:24 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/20 06:38:45 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed	a(10);
	Fixed	b(4);
	Fixed	c;

	c = a / b;
	std::cout << c << std::endl;
	// std::cout << a.getRawBits() << "\t" << b.getRawBits() << std::endl;
	// std::cout << (b - a) << std::endl;
	return (0);
}
