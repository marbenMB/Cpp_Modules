/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:37 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/04 01:09:38 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() : _type(INIT), _float(INIT), _sign(INIT), _dot(INIT)
{
	// std::cout << "Base : Default Constructor Called" << std::endl;
}

Base::~Base()
{
	// std::cout << "Base : Destructor Called" << std::endl;
}

Base::Base(Base const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Base	&Base::operator= (const Base &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		_type = obj._type;
		_float = obj._float;
		_sign = obj._sign;
		_dot = obj._dot;
	}
	return (*this);
}

void	Base::parseArg (void)
{
	
}