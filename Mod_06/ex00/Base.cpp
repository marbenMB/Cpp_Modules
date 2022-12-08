/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marouanebenbajja <marouanebenbajja@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:37 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/08 19:20:24 by marouaneben      ###   ########.fr       */
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

//	**********	Getters ********* :

int		Base::getType (void) const { return _type; };
double	Base::getValue (void) const { return _value; };
int		Base::getSign (void) const { return _sign; };

//	********** | ********* :

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

void	Base::isNan (void)
{
	std::stringstream	ss;
	std::string			str(arg);

	ss << str.c_str();
	if (!arg.compare("-inf"))
	{
		_type = _INF;
		_sign = 1;
	}
	else if (!arg.compare("+inf"))
		_type = INF;
	else if (!arg.compare("-inff"))
	{
		ss.str("");
		ss.clear();
		ss << arg.erase(arg.length() - 1);
		_type = _INFF;
		_sign = 1;
	}
	else if (!arg.compare("+inff"))
	{
		ss.str("");
		ss.clear();
		ss << arg.erase(arg.length() - 1);
		_type = INFF;
	}
	else if	(!arg.compare("nan"))
		_type = _NAN;
	ss >> _value;
}

void	Base::parseArg (void)
{
	isNan();
	if (_type == INIT)
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
	if (floor(num) > INT_MAX || floor(num) < INT_MIN)
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

std::ostream&	operator<< (std::ostream& out, Base const &obj)
{
	char	c;
	int		n;
	float	fn;
	double	dn;
	
	//	CHAR :
	c = static_cast <char>(obj.getValue());
	out << "Char : ";
	if (obj.getType() >= _NAN && obj.getType() <= INFF)
		out	<< "Impossible";
	else if (c < 32)
		out << "Non Displayable";
	else
		out << c;
	out << std::endl;
	
	//	INT :
	n = static_cast <int>(obj.getValue());
	out << "Int : ";
	if (obj.getType() >= _NAN && obj.getType() <= INFF)
		out	<< "Impossible";
	else
		out << n;
	out << std::endl;

	if (obj.getSign())
		out << std::showpos;

	//	FLOAT :
	fn = static_cast <float>(obj.getValue());
	out << "Float : ";
	out << std::fixed << std::setprecision(4) << fn <<"f";
	out << std::endl;

	// DOUBLE :
	dn = static_cast <double>(obj.getValue());
	out << "Double : " << std::fixed << std::setprecision(4)
	<< dn << std::endl;
	
	return	out;
}
