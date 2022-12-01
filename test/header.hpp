/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:05:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/30 18:55:41 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_HEADER_HPP_
#define _HEADER_HPP_

// ******************************************************** //
//                         INCLUDES                        //
// ****************************************************** //
#include <iostream>

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
		Test(){};
		int getX() {	return (x);	}
		void setX(int _x){	this->x = _x;	};
};
// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //



#endif