/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:18 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/20 07:09:06 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_shift = 8;

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default Constructor Called" << std::endl;
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
	std::cout << "Int Constructor Called" << std::endl;
	this->_rawBits = ival << _shift;
}

Fixed::Fixed(float const fval)
{
	float	tmp;

	std::cout << "Float Constructor Called" << std::endl;
	tmp = fval * (1 << _shift);
	this->_rawBits = roundf(tmp);
}

// ******************************************************** //
//                  OPERATORS OVERLODING                   //
// ****************************************************** //

Fixed	&Fixed::operator= (const Fixed &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->_rawBits = obj._rawBits;
	return (*this);
}

//	*** COMPARAISON :

bool	Fixed::operator< (Fixed const &obj)
{
	return (this->_rawBits < obj._rawBits);
}

bool	Fixed::operator<= (Fixed const &obj)
{
	return (this->_rawBits <= obj._rawBits);
}

bool	Fixed::operator> (Fixed const &obj)
{
	return (!(*this <= obj));
}

bool	Fixed::operator>= (Fixed const &obj)
{
	return (!(*this < obj));
}

bool	Fixed::operator== (Fixed const &obj)
{
	return (this->_rawBits == obj._rawBits);
}

bool	Fixed::operator!= (Fixed const &obj)
{
	return (!(*this == obj));
}

//	***	ARITHMETICS :

Fixed	Fixed::operator+ (Fixed const &obj)
{
	return (Fixed((this->_rawBits + obj._rawBits) / (float)(1 << _shift)));
}

Fixed	Fixed::operator- (Fixed const &obj)
{
	return (Fixed((this->_rawBits - obj._rawBits) / (float)(1 << _shift)));
}

Fixed	Fixed::operator* (Fixed const &obj)
{
	return (Fixed((this->_rawBits / (float)(1 << _shift)) * (obj._rawBits/ (float)(1 << _shift))));
}

Fixed	Fixed::operator/ (Fixed const &obj)
{
	return (Fixed((this->_rawBits / (float)(1 << _shift)) / (obj._rawBits/ (float)(1 << _shift))));
}

//	***	INC - DEC :

Fixed	Fixed::operator++ (int)
{
	Fixed	tmp(*this);

	this->_rawBits++;
	return (tmp);
}

Fixed	Fixed::operator++ (void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator-- (int)
{
	Fixed	tmp(*this);

	this->_rawBits--;
	return (tmp);
}

Fixed	Fixed::operator-- (void)
{
	this->_rawBits--;
	return (*this);
}

// ******************************************************** //
//				Getters - Setters - ft_to	 			   //
// ****************************************************** //

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
	out << obj.toFloat();
	return (out);
}