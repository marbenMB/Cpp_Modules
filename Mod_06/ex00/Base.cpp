/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:37 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/07 10:28:38 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() : _type(INIT), _float(INIT), _sign(INIT), _dot(0)
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

const char*	Base::ErrorArg::what(void) const throw()
{
	return "Not A Valid Argument!!";
}

const char* Base::MaxDataType::what(void) const throw()
{
	return "Limit For Data Type!!";
}

void	Base::parseArg (void)
{
	findDot();
	if (_dot)
	{
		if (arg[arg.length() - 1] == 'f')
			isFloat();
		// else
		// 	isDouble();
	}
	// if (!_dot)
		
}

void	Base::findDot(void)
{
	size_t 	idx = 0;
	int		i = 0;

	while (idx != std::string::npos)
	{
		idx = arg.find('.', i);
		if (idx != std::string::npos)
		{
			i += ++idx;
			if (!_dot)
				_dot = DOTED;
			else if (_dot)
			{
				_dot = 0;
				throw	Base::ErrorArg();
			}
		}
	}
}

// void	Base::isChar (void)
// {
// 	if (arg.length() == 1 && isalpha(arg[0]))
// 		return true;
// 	return (false);
// }

// void	Base::isInt (void)
// {
// 	long long	num;
// 	int			i = -1;
	
// 	if (arg[++i] == '+' || arg[i] == '-')
// 		i++;
// 	while (arg[i])
// 	{
// 		if (!isdigit(arg[i]))
// 			return false;
// 		i++;
// 	}
// 	std::stringstream(arg) >> num;
	
// 	if (num > INT_MAX || num < INT_MIN || arg.empty())
// 		return false;
	
// 	return true;
// }

void	Base::isFloat (void)
{
	double				num;
	std::string			str;
	std::stringstream	ss;

	str = arg;
	ss << str.erase(arg.length() - 1);
	ss >> num;
	if (ss.fail())
		throw Base::ErrorArg();
	if (floorf(num) > INT_MAX)
		throw Base::MaxDataType();
	_type = FLOAT;
}

// void	Base::isDouble (void)
// {
	
// }