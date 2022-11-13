/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/13 01:12:48 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

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

void	Car::setCarSpeed(int s)
{
	this->_speed = s;
}

void	Car::carBrand(void)
{
	std::cout << "Car Brand : " << this->_brand << std::endl;
}


int main()
{
	int	a = -1;
	int	&ref = a;
	int	*ptr = &a;

	std::cout << "prt addr : " << &ptr << std::endl;
	std::cout << "var addr : " << &a << std::endl;
	std::cout << "ref addr : " << &ref << std::endl << std::endl;

	std::cout << "prt : " << *ptr << std::endl;
	std::cout << "var : " << a << std::endl;
	std::cout << "ref : " << ref << std::endl;
	ref = 4;
	std::cout << "prt : " << *ptr << std::endl;
	std::cout << "var : " << a << std::endl;
	std::cout << "ref : " << ref << std::endl;
}
