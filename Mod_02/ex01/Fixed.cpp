/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:18 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/19 21:03:30 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_shift = 8;

Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
	this->_rawBits = 0;
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

Fixed::Fixed(int const ival)
{
	this->_rawBits = ival << _shift;
}

Fixed::Fixed(float const fval)
{
	float	tmp;

	
	tmp = fval * (1 << _shift);
	this->_rawBits = roundf(tmp);
}

Fixed	&Fixed::operator= (const Fixed &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->_rawBits = obj._rawBits;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits Called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits Called" << std::endl;
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	float	tmp;

	tmp = this->_rawBits / (float)(1 << _shift);
	return (tmp);
}

int		Fixed::toInt(void) const
{
	int	tmp;

	tmp = this->_rawBits >> _shift;
	return (tmp);
}

std::ostream	&operator<< (std::ostream &out, Fixed const &obj)
{
	out << obj.toFloat() << std::endl;
	return (out);
}