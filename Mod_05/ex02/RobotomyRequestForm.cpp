/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:35 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/01 08:57:36 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	RobotomyRequestForm::execute (Bureaucrat const &executor) const
{
	srand(time(0));
	int	choice = rand() % 2;	
	if (!check_excution(executor.getGrade()))
		throw	AForm::GradeTooLowException();
	if (choice)
		std::cout << this->_target << " has been robotomized successfully!!" << std::endl;
	else
		std::cout << "Robotomy Failed!!" << std::endl;
}
