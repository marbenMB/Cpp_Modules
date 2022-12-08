/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marouanebenbajja <marouanebenbajja@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:54 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/07 23:18:12 by marouaneben      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(int ac, char **av)
{
	Base	convert;

	try {
		if (ac != 2)
			throw "Bad Arguments !!";
		convert.arg = std::string(av[1]);
		convert.parseArg();
		std::cout << convert;
	}
	catch (const char* msg) {
		std::cout << msg << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
