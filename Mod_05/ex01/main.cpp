/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:56:53 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/02 03:18:45 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	
	try
	{
		Bureaucrat	goko("goko", 5);
		Bureaucrat	vegita("Vegita", 150);
		Form		sokna("Sokna");


		goko.signForm(sokna);
		sokna.beSigned(goko);

		std::cout << sokna << std::endl;
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
