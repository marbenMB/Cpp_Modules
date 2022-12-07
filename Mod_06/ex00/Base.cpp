/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:37 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/07 18:57:50 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() : _type(INIT), _sign(INIT), _dot(0), _valid(0) {}

Base::~Base() {}

Base::Base(Base const &obj)
{
	if (this != &obj)
		*this = obj;
}

Base	&Base::operator= (const Base &obj)
{
	if (this != &obj)
	{
		_type = obj._type;
		_sign = obj._sign;
		_dot = obj._dot;
		_value = obj._value;
		_valid = obj._valid;
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

void	Base::isNumeric (std::string arg)
{
	size_t idx = 0;
	
	if (arg[idx] == '-' || arg[idx] == '+')
		idx++;
	for (size_t i = idx; i < arg.length(); i++)
		if (!isdigit(arg[i]) && arg[i] != '.')
			throw Base::ErrorArg();
	_valid = 1;
}

void	Base::parseArg (void)
{
	findDot();
	if (_dot)
	{
		if (arg[arg.length() - 1] == 'f')
			isFloat();
		else
			isDouble();
	}
	else
	{
		if (isdigit(arg[0]) || ((arg[0] == '-' || arg[0] == '+') && arg.length() > 1))
			isInt();
		else if (_type == INIT && arg.length() == 1)
			isChar();
		else
			throw Base::ErrorArg();
	}
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

double	Base::readArg (const char* arg)
{
	double				num;
	std::stringstream	ss;

	isNumeric(arg);
	ss << arg;
	ss >> num;
	if (ss.fail())
		throw Base::ErrorArg();
	return num;
}

void	Base::isFloat (void)
{
	double				num;
	std::string			str(arg);

	str.erase(str.length() - 1);
	num = readArg(str.c_str());
	if (floorf(num) > INT_MAX || floorf(num) < INT_MIN)
		throw Base::MaxDataType();
	_value = num;
	_type = FLOAT;
}

void	Base::isDouble (void)
{
	double				num;
	std::string			str(arg);

	num = readArg(str.c_str());
	_value = num;
	_type = DOUBLE;
}

void	Base::isInt (void)
{
	double				num;
	std::string			str(arg);

	num = readArg(str.c_str());
	if (num < INT_MIN || num > INT_MAX)
		throw Base::MaxDataType();
	_value = num;
	_type = INT;
}

void	Base::isChar (void)
{
	_value = arg[0];
	_type = CHAR;
}