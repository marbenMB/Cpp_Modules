#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "RPN : Default Constructor Called" << std::endl;
}

RPN::~RPN()
{
	std::cout << "RPN : Destructor Called" << std::endl;
}

RPN::RPN(RPN const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

RPN	&RPN::operator= (const RPN &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
