/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:31:10 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/02 03:02:56 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern : Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern : Destructor Called" << std::endl;
}

Intern::Intern(Intern const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Intern	&Intern::operator= (const Intern &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	(void)obj;
	return (*this);
}

AForm*	Intern::makeForm (std::string name, std::string target)
{
	std::string	forms[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	int			i;
	
	for (i = 0; i < 3; i++)
		if (!name.compare(forms[i]))
			break;
	if (i < 3)
		std::cout << "Inter Creates " << name << std::endl;
	switch (i)
	{
	case 0 :
		return (new ShrubberyCreationForm(target));
		break;
	case 1 :
		return (new RobotomyRequestForm(target));
		break;
	case 2 :
		return (new PresidentialPardonForm(target));
		break;
	default:
		std::cout << "Form Not Available For Inter!!" << std::endl;
		throw "No Form Was Created!!";
		break;
	}
	return (NULL);
}