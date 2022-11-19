/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:03:21 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/19 20:33:09 by mbenbajj         ###   ########.fr       */
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
		
		Fixed &operator= (const Fixed &obj);
		
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