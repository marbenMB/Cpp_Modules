/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:23 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/01 09:09:50 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat				king("King", 1);
		Bureaucrat				m9edem("m9edem", 20);
		Bureaucrat				chawch("Chawch", 40);
		ShrubberyCreationForm	a("sokna");
		PresidentialPardonForm	b("l3afow");
		RobotomyRequestForm		c("Roboto");

		std::cout << std::endl << "**** Starting Tests ****" << std::endl << std::endl;
		
		a.beSigned(chawch);
		chawch.signForm(a);
		chawch.executeForm(a);

		c.beSigned(m9edem);
		m9edem.signForm(c);
		m9edem.executeForm(c);

		b.beSigned(king);
		king.signForm(b);
		king.executeForm(b);
		// chawch.executeForm(b);
	}
	catch (const char *msg)
	{
		std::cerr << msg << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "**** Finishing Tests ****" << std::endl << std::endl;
	return (0);
}
