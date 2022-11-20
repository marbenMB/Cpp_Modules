/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:21 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/20 07:02:47 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_FIXED_HPP_
#define _FIXED_HPP_

// ******************************************************** //
//                         INCLUDES                        //
// ****************************************************** //
#include <iostream>
#include <cmath>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Fixed
{
	public	:
		Fixed ();
		Fixed (Fixed const &obj);
		Fixed (int const ival);
		Fixed (float const fval);
		~Fixed ();
		
		Fixed	&operator= (const Fixed &obj);
	//	Comparison Operators :
		bool	operator< (Fixed const &obj);
		bool	operator<= (Fixed const &obj);
		bool	operator> (Fixed const &obj);
		bool	operator>= (Fixed const &obj);
		bool	operator== (Fixed const &obj);
		bool	operator!= (Fixed const &obj);
	//	Arithmetic Operators :
		Fixed	operator+ (Fixed const &obj);
		Fixed	operator- (Fixed const &obj);
		Fixed	operator* (Fixed const &obj);
		Fixed	operator/ (Fixed const &obj);
	//	Inc , Dec (Pre , Pos) :
		Fixed	operator++ (void);
		Fixed	operator++ (int);
		Fixed	operator-- (void);
		Fixed	operator-- (int);
	//	Min & Max :
		// static Fixed &min(Fixed &o1, Fixed &o2);
		// static Fixed &min(Fixed const &o1, Fixed const &o2);
		// static Fixed &max(Fixed &o1, Fixed &o2);
		// static Fixed &max(Fixed const &o1, Fixed const &o2);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
	private	:
		int					_rawBits;
		static const int	_shift;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //
std::ostream	&operator<< (std::ostream &out, Fixed const &obj);
#endif