/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:34:16 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/27 19:25:42 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "Animal : Default Constructor Called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal : Destructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AAnimal	&AAnimal::operator= (const AAnimal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string	AAnimal::getType (void) const
{
	return (this->type);
}
