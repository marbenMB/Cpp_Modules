/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:56:47 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/02 03:09:01 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _isSigned(0), _required(150), _execute(150)
{
	std::cout << "Form : Default Constructor Called" << std::endl;
}

Form::Form (std::string name) : _name(name), _isSigned(0), _required(150), _execute(150)
{
	std::cout << "Form : Constructor Called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form : Destructor Called" << std::endl;
}

Form::Form(Form const &obj) : _name(obj._name), _required(obj._required), _execute(obj._execute)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Form	&Form::operator= (const Form &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_isSigned = obj._isSigned;
	}
	return (*this);
}

bool	Form::getSign (void) const { return (this->_isSigned); }

int		Form::getReq (void) const { return (this->_required); }

int		Form::getExec (void) const { return (this->_execute); }

std::string	const Form::getName (void) const { return (this->_name); }

const	char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High To Sign!!");
}

const	char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade To Low To Sigh!!");
}

void	Form::beSigned (Bureaucrat &signee)
{
	if (signee.getGrade() > this->_required)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = 1;
}

std::ostream	&operator<< (std::ostream &out, Form const &obj)
{
	out << "- Form Name : " << obj.getName() << std::endl
		<< "- Is Signed : " << obj.getSign() << std::endl
		<< "- Required  : " << obj.getReq() << std::endl
		<< "- Executer  : " << obj.getExec() << std::endl;
	return (out);
}
