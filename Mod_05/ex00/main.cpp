/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:29:11 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/02 03:15:50 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	
	try
	{
		// Bureaucrat	goko("", 5); -> Element exception
		Bureaucrat	goko("Goko", 5);
		Bureaucrat	vegita("Vegita", 149);

		goko.incGrade();
		vegita.decGrade();
		
		std::cout << goko << std::endl << vegita << std::endl;
	}
	catch (const char *msg)
	{
		std::cerr << "-+>	" << msg << "   <+-" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "-+>	" << e.what() << "    <+-" << std::endl;
	}
	

	return (0);
}
