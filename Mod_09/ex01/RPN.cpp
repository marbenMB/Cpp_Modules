#include "RPN.hpp"

//	??	************	CLASS	************	??	//

RPN::RPN()
{
	// std::cout << "RPN : Default Constructor Called" << std::endl;
}

RPN::RPN (char *tab)
{
	double	n1, n2;
	int		i = 0;

	while (tab[i] != '\0')
	{
		if (tab[i] == ' ')
			i++;
		if (std::isdigit(tab[i]))
		{
			_DB.push(std::atoi(&tab[i]));
		}
		else
		{
			if (_DB.size() < 2)
				throw	std::runtime_error("Not Enough Digits!!");
			n1 = _DB.top();
			_DB.pop();
			n2 = _DB.top();
			_DB.pop();
			if (tab[i] == '*')
			{
				_res = n2 * n1;
				_DB.push(_res);
			}
			else if (tab[i] == '/')
			{
				_res = n2 / n1;
				_DB.push(_res);
			}
			else if (tab[i] == '+')
			{
				_res = n2 + n1;
				_DB.push(_res);
			}
			else if (tab[i] == '-')
			{
				_res = n2 - n1;
				_DB.push(_res);
			}
			else
				throw std::runtime_error("Bad Arguments!!");
		}
		i++;
	}
	if (_DB.size() != 1)
		throw	std::runtime_error("Error!!");
}

RPN::~RPN()
{
	// std::cout << "RPN : Destructor Called" << std::endl;
}

RPN::RPN(RPN const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

RPN	&RPN::operator= (const RPN &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		_DB = obj._DB;
		_res = obj._res;
	}
	return (*this);
}

double	RPN::getRes (void) const { return _res; }


//	??	************	FUNCTIONS	************	??	//


std::ostream	&operator<< (std::ostream &out, RPN calculation)
{
	out << calculation.getRes();
	return out;
}
