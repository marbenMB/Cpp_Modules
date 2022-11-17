/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:18 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/17 21:31:52 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_rawBits = 1;

Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Fixed	&Fixed::operator= (const Fixed &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->_value = obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits Called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits Called" << std::endl;
	this->_value = raw;
}