/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:06:08 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/21 02:02:51 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_POINT_HPP_
#define _POINT_HPP_

// ******************************************************** //
//                         INCLUDES                        //
// ****************************************************** //
#include <iostream>
#include "Fixed.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Point
{
	public :
		Point();
		Point (Point const &obj);
		~Point ();
		Point &operator= (const Point &obj);

		Point (float const x, float const y);
		float	getX(void) const;
		float	getY(void) const;
		
	private :
		Fixed const	_x;
		Fixed const	_y;
		
		
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif