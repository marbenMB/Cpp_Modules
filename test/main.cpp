/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/11 20:28:45 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
};

Car::Car()
{
	this->_brand = "NotDefined";
	std::cout << "Default Constructor Called" << std::endl;
}

Car::Car(std::string br, int mod)
{
	this->_brand = br;
	this->_model = mod;
	std::cout << "Parameterized Constructor Called" << std::endl;
}

void	Car::carBrand(void)
{
	std::cout << "Car Brand : " << this->_brand << std::endl;
}


int main()
{
	Car	leon;
	leon.carBrand();
	Car	bmw("bmw", 2021);
	bmw.carBrand();
}
