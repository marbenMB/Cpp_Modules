/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:09:54 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/04 01:09:55 by mbenbajj         ###   ########.fr       */
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
		std::cout << convert.arg << std::endl;
	}
	catch (const char* msg) {
		std::cout << msg << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
