/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:05:12 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/14 05:59:50 by mbenbajj         ###   ########.fr       */
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

class Motor
{
	private :
		int	i;
	
	public:
		Motor(){
			i = 1;
			std::cout << "Motor Constructor Called"  << i << std::endl;
			};
		~Motor(){
			std::cout << "Motor Destructor Called" << std::endl;
		};
};

class Pikala
{
	private :
		Motor x;

	public:
		Pikala(){
			std::cout << "Pikala Constructor Called" << std::endl;
			};
		~Pikala(){
			std::cout << "Pikala Destructor Called" << std::endl;
		};
};

class Car
{
	private :
		std::string	_brand;
		int			_model;
		int			_speed;
	public :
		Car();
		Car(std::string br, int mod);
		void	carBrand(void);
		void	setCarSpeed(int s);
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //



#endif