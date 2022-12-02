/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:23 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/02 03:46:07 by mbenbajj         ###   ########.fr       */
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
		Bureaucrat	king("King", 1);
		Bureaucrat	mayor("Mayor", 40);
		Bureaucrat	governor("Governor", 60);

		ShrubberyCreationForm	repairs("Reparations"); // s : 145 - E : 137
		RobotomyRequestForm		living("Living"); 	// s : 72 - E : 45
		PresidentialPardonForm	criminal("International Criminal");	// s : 25 - E : 5

		std::cout << std::endl << "**** Starting Tests ****" << std::endl << std::endl;
		governor.signForm(repairs);
		repairs.beSigned(governor);
		governor.executeForm(repairs);
		
		std::cout << std::endl;

		mayor.signForm(living);
		living.beSigned(mayor);
		mayor.executeForm(living);
		// governor.executeForm(living);	// Throw Low Grade Exception.
		
		std::cout << std::endl;

		king.signForm(criminal);
		criminal.beSigned(king);
		king.executeForm(criminal);
		// mayor.executeForm(criminal);	// Throw Low Grade Exception.
		
		std::cout << std::endl << "**** Finishing Tests ****" << std::endl << std::endl;
	}
	catch (const char *msg)
	{
		std::cerr << "-+>	" << msg << "    <+-" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "-+>	" << e.what() << "    <+-" << std::endl;
	}
	return (0);
}
