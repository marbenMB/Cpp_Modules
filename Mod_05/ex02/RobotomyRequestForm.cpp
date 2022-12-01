#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45)
{
	std::cout << "RobotomyRequestForm : Default Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (std::string target) : AForm("RobotomyRequest", 72, 45)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm : Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm : Destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

RobotomyRequestForm	&RobotomyRequestForm::operator= (const RobotomyRequestForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_target = obj._target;
	}
	return (*this);
}
