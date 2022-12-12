/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marouanebenbajja <marouanebenbajja@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:05:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/12 00:58:44 by marouaneben      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_HEADER_HPP_
#define _HEADER_HPP_

// ******************************************************** //
//                         INCLUDES                        //
// ****************************************************** //
#include <iostream>
#include <sstream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Vihecule
{
	public : 
		Vihecule (int n) : _nbWheel(n) {}
		virtual void	printChara(void){
			std::cout << "Vehicule Wheels : " << _nbWheel << std::endl;
		}
		int		_nbWheel;
};

class	Car : public Vihecule
{
	public	:
		Car (int n) : Vihecule(n) {}
		virtual void	printChara(void){
			std::cout << "Car Wheels : " << _nbWheel << std::endl;
		}
};

class Test
{
	int const	x;
	public : 
		Test() : x(0) {};
		int getX() {	return (x);	}
};
// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //



#endif