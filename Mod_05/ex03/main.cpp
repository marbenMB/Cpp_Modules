/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:23 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/02 05:28:48 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat	king("King", 1);
		Bureaucrat	mayor("Mayor", 40);
		Bureaucrat	governor("Governor", 60);

		Intern	governorIntern;
		Intern	mayorIntern;
		Intern	kingIntern;
		AForm*	repairsForm = governorIntern.makeForm("Shrubbery Creation", "Reparations");
		AForm*	livingForm = mayorIntern.makeForm("Robotomy Request", "Living");
		AForm*	criminalForm = kingIntern.makeForm("Presidential Pardon", "International Criminal");
		
		std::cout << std::endl << "**** Starting Tests ****" << std::endl << std::endl;
		governor.signForm(*repairsForm);
		repairsForm->beSigned(governor);
		governor.executeForm(*repairsForm);
		
		std::cout << std::endl;

		mayor.signForm(*livingForm);
		livingForm->beSigned(mayor);
		mayor.executeForm(*livingForm);
		// governor.executeForm(living);	// Throw Low Grade Exception.
		
		std::cout << std::endl;

		king.signForm(*criminalForm);
		criminalForm->beSigned(king);
		king.executeForm(*criminalForm);
		// mayor.executeForm(criminal);	// Throw Low Grade Exception.
	
		std::cout << std::endl << "**** Finishing Tests ****" << std::endl << std::endl;
		
		delete	repairsForm;
		delete	livingForm;
		delete	criminalForm;
	}
	catch (const char *msg)
	{
		std::cerr << "-+>	" << msg << "    <+-"<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "-+>	" << e.what() << "    <+-" << std::endl;
	}
	return (0);
}
