/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:37 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/07 00:35:12 by mbenbajj         ###   ########.fr       */
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
	if (isInt())
		std::cout << "Int " << std::endl;
}

bool	Base::findDot(void)
{
	int		i = 0;
	int		idx = 0;
	bool	check = 0;

	while (arg[i])
	{
		idx = arg.find('.', i);
		if (idx != -1)
		{
			i += idx++;
			if (!check)
				check = 1;
			if (check)
			{
				check = 0;
				break ;
			}
		}
	}
	return	check;
}

bool	Base::isChar (void)
{
	if (arg.length() == 1 && isalpha(arg[0]))
		return true;
	return (false);
}

bool	Base::isInt (void)
{
	long long	num;
	int			i = -1;
	
	if (arg[++i] == '+' || arg[i] == '-')
		i++;
	while (arg[i])
	{
		if (!isdigit(arg[i]))
			return false;
		i++;
	}
	std::stringstream(arg) >> num;
	
	if (num > INT_MAX || num < INT_MIN || arg.empty())
		return false;
	
	return true;
}