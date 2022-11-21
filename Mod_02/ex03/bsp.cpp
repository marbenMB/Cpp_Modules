/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:05:48 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/21 03:32:50 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	det(float a, float b)
{
	return (a - b);
}

float	surface(Point a, Point b, Point c)
{
	float	air;
	
	air = 0.5 * abs((a.getX() * (b.getY() - c.getY())) - \
					(b.getX() * (a.getY()- c.getY())) + \
					(c.getX() * (a.getY()- b.getY())));
	return (air);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	Tair;
	float	air1;
	float	air2;
	float	air3;
	float	airSum;

	Tair = surface(a, b, c);
	air1 = surface(a, b, point);
	air2 = surface(a, c, point);
	air3 = surface(b, c, point);
	
	if (Tair != 0)
	{
		if (air1 != 0 && air2 != 0 && air3 != 0)
		{
			airSum = surface(a, b, point) + surface(a, c, point) + surface(b, c, point);
			if (Tair == airSum)
				return (1);
		}
	}
	return (0);
}
