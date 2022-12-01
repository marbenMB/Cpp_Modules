#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5)
{
	std::cout << "PresidentialPardonForm : Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5)
{
	this->_target = target;
	std::cout << "PresidentialPardonForm : Constructor Called" << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm : Destructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

PresidentialPardonForm	&PresidentialPardonForm::operator= (const PresidentialPardonForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_target = obj._target;
	}
	return (*this);
}