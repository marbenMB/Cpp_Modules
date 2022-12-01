/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:07 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/01 08:57:08 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm() : _name("Form"), _isSigned(0), _required(150), _execute(150)
{
	std::cout << "AForm :  Constructor Called" << std::endl;
}

AForm::AForm (std::string name, int req, int exec) : _name(name), _isSigned(0), _required(req), _execute(exec)
{
	std::cout << "AForm : Constructor Called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm : Destructor Called" << std::endl;
}

AForm::AForm(AForm const &obj) : _name(obj._name), _required(obj._required), _execute(obj._execute)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AForm	&AForm::operator= (const AForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_isSigned = obj._isSigned;
	}
	return (*this);
}

bool	AForm::getSign (void) const { return (this->_isSigned); }

int		AForm::getReq (void) const { return (this->_required); }

int		AForm::getExec (void) const { return (this->_execute); }

std::string	const AForm::getName (void) const { return (this->_name); }

const	char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High To Sign!!");
}

const	char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade To Low To Sign!!");
}

void	AForm::beSigned (Bureaucrat &signee)
{
	if (signee.getGrade() > this->_required)
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = 1;
}

int	AForm::check_excution (int executor) const
{
	if (this->_isSigned)
		if (this->_execute >= executor)
			return 1;
	return 0;
}

std::ostream	&operator<< (std::ostream &out, AForm const &obj)
{
	out << "- Form Name : " << obj.getName() << std::endl
		<< "- Is Signed : " << obj.getSign() << std::endl
		<< "- Required  : " << obj.getReq() << std::endl
		<< "- Executer  : " << obj.getExec() << std::endl;
	return (out);
}
