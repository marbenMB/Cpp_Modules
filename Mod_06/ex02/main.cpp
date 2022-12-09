/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:26:00 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/09 16:26:01 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	Base	*inst = generate();

	std::cout << std::endl << "<POINTER> :" << std::endl;
	identify(inst);
	std::cout << std::endl << "<REFERENCE> :" << std::endl;
	identify(*inst);
	delete inst;
	return (0);
}