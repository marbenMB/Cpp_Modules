/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:06:05 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/21 02:43:19 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	// std::cout << "Point Constructor Called" << std::endl;
}

Point::Point(float x, float y) : _x(x), _y(y)
{
	// std::cout << "Point Pararmetrized Constructor Called" << std::endl;	
}

Point::Point(Point const &obj) : _x(obj._x), _y(obj._y) 
{
	// std::cout << "Point Copy Constructor Called" << std::endl;
}

Point	&Point::operator= (Point const &obj)
{
	// std::cout << "Point Copy Assignment Operator Overload" << std::endl;
	if (this != &obj)
	{
		new (this) Point(obj);
	}
	return (*this);
}

Point::~Point ()
{
	// std::cout << "Point Destructor Called" << std::endl;
}

float	Point::getX(void) const
{
	return this->_x.toFloat();
}

float	Point::getY(void) const
{
	return this->_y.toFloat();
}