/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/16 02:23:58 by mbenbajj         ###   ########.fr       */
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
	// std::string	str = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
	// std::string	s1 = "Ipsum";
	// size_t			i;
	// size_t			start;

	// i = 0;
	// start = 0;
	// while (i < str.length())
	// {
	// 	i = str.find(s1, start);
	// 	start = i + s1.length();
	// 	std::cout << i << "\t - \t";
	// }
	// std::cout << str[0];

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t pu enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

